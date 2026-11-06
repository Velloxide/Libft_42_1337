/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <saboutay@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 11:58:11 by saboutay          #+#    #+#             */
/*   Updated: 2026/11/06 11:16:37 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_print_d_i(t_spec *s, int n)
{
	(void)s;
	(void)n;
	return (0);
}

int	ft_print_u(t_spec *s, unsigned int n)
{
	char	*buf;
	int	len;
	int	zeros;
	int	count;
	
	buf = ft_utoa_base(n, "0123456789", 10);
	if (!buf)
		return (-1);
	len = ft_strlen(buf);
	if (s->prec == 0 && n == 0)
		len = 0;
	zeros = 0;
	if (s->prec > len)
		zeros = s->prec - len;
	count = ft_print_number(s, buf, len, zeros);
	free(buf);
	return (count);
}
