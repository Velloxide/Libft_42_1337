/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:38:29 by saboutay          #+#    #+#             */
/*   Updated: 2026/10/17 01:47:33 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_overflow(int d, unsigned long max, int sign, int *over)
{
	unsigned long long	limit;

	limit = MY_INT_MAX + (sign < 0);
	if (max > (limit - d) / 10)
	{
		*over = (int)(limit * sign);
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	unsigned long long	max;
	int				sign;
	int				over;

	while (*nptr && (*nptr == 32 || (*nptr >= 9 && *nptr <= 13)))
		nptr++;
	sign = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	max = 0;
	while (*nptr && ft_isdigit(*nptr))
	{
		if (ft_overflow((*nptr - 48), max, sign, &over))
			return (over);
		max = (max * 10) + (*nptr - 48);
		nptr++;
	}
	return ((int)(max * sign));
}
