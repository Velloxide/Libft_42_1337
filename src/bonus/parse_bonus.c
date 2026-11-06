/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <saboutay@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:56:30 by saboutay          #+#    #+#             */
/*   Updated: 2026/11/05 15:33:18 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include "libft.h"

static void	ft_init_spec(t_spec *spec)
{
	spec->minus = 0;
	spec->zero = 0;
	spec->plus = 0;
	spec->space = 0;
	spec->hash = 0;
	spec->width = 0;
	spec->prec = -1;
	spec->type = 0;
}

static int	ft_isflag(char c)
{
	if (c == '-' || c == '0' || c == '+' || c == ' ' || c == '#')
		return (1);
	return (0);
}

static int	ft_parse_flags(const char *format, t_spec *spec)
{
	int	i;

	i = 0;
	while (ft_isflag(format[i]))
	{
		if (format[i] == '-')
			spec->minus = 1;
		else if (format[i] == '0')
			spec->zero = 1;
		else if (format[i] == '+')
			spec->plus = 1;
		else if (format[i] == ' ')
			spec->space = 1;
		else
			spec->hash = 1;
		i++;
	}
	return (i);
}

static int	ft_parse_num(const char *format, int *width)
{
	int	i;

	i = 0;
	while (format[i] >= '0' && format[i] <= '9')
	{
		*width = (*width * 10) + (format[i] - '0');
		i++;
	}
	return (i);
}

int	ft_parse(const char *format, t_spec *spec)
{
	int	count;

	ft_init_spec(spec);
	count = ft_parse_flags(format, spec);
	count += ft_parse_num(format + count, &spec->width);
	if (format[count] == '.')
	{
		count++;
		spec->prec = 0;
		count += ft_parse_num(format + count, &spec->prec);
	}
	if (format[count])
	{
		spec->type = format[count];
		count++;
	}
	return (count);
}
