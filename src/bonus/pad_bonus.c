/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <saboutay@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:09:46 by saboutay          #+#    #+#             */
/*   Updated: 2026/11/06 11:16:36 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_pad(int pad, char c)
{
	int	i;
	int	value;

	i = 0;
	while (i < pad)
	{
		value = ft_print_char(c);
		if (value < 0)
			return (-1);
		i++;
	}
	return (i);
}

static int	ft_pad_side(t_spec *s, int len, int side)
{
	if (s->minus != side)
		return (0);
	return (ft_pad(s->width - len, ' '));
}

int	ft_print_field(t_spec *s, char *str, int len)
{
	int	count;
	int	value;

	count = ft_pad_side(s, len, 0);
	if (count < 0)
		return (-1);
	value = ft_print_str(str, len);
	if (value < 0)
		return (-1);
	value += count;
	count = ft_pad_side(s, len, 1);
	if (count < 0)
		return (-1);
	return (count + value);
}

int	ft_print_number(t_spec *s, char *str, int len, int zeros)
{
	int	spaces;
	int	count;
	int	value;

	spaces = s->width - len - zeros;
	if (spaces < 0)
		spaces = 0;

}
