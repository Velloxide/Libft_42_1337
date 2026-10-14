/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:19:44 by saboutay          #+#    #+#             */
/*   Updated: 2026/10/14 17:46:50 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	a[16];
	char	b[16];
	int		s;
	int		d;
	int		n;
	int		fails;

	fails = 0;
	for (s = 0; s < 16; s++)
	{
		for (d = 0; d < 16; d++)
		{
			for (n = 0; n <= 16 - (s > d ? s : d); n++)
			{
				memcpy(a, "ABCDEFGHIJKLMNOP", 16);
				memcpy(b, "ABCDEFGHIJKLMNOP", 16);
				ft_memmove(a + d, a + s, n);
				memmove(b + d, b + s, n);
				if (memcmp(a, b, 16) != 0)
				{
					printf("FAIL: src=%d dest=%d n=%d\n", s, d, n);
					fails++;
				}
			}
		}
	}
	if (fails == 0)
		printf("Ntttta Nice\n");
	return (fails != 0);
}
