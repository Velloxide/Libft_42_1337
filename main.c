/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <saboutay@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 18:18:42 by saboutay          #+#    #+#             */
/*   Updated: 2026/11/06 14:50:14 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	printf("========== ZERO VALUE ==========\n");
	a = ft_printf("ft: |%#x|\n", 0);
	b = printf("pf: |%#x|\n", 0);
	printf("count: %d | %d\n\n", a, b);

	a = ft_printf("ft: |%#.0x|\n", 0);
	b = printf("pf: |%#.0x|\n", 0);
	printf("count: %d | %d\n\n", a, b);

	a = ft_printf("ft: |%#08x|\n", 0);
	b = printf("pf: |%#08x|\n", 0);
	printf("count: %d | %d\n\n", a, b);

	printf("========== PRECISION ==========\n");
	a = ft_printf("ft: |%.8x|\n", 42);
	b = printf("pf: |%.8x|\n", 42);
	printf("count: %d | %d\n\n", a, b);

	a = ft_printf("ft: |%08.5x|\n", 42);
	b = printf("pf: |%08.5x|\n", 42);
	printf("count: %d | %d\n\n", a, b);

	a = ft_printf("ft: |%#.8x|\n", 42);
	b = printf("pf: |%#.8x|\n", 42);
	printf("count: %d | %d\n\n", a, b);

	a = ft_printf("ft: |%#12.8x|\n", 42);
	b = printf("pf: |%#12.8x|\n", 42);
	printf("count: %d | %d\n\n", a, b);

	printf("========== LEFT ALIGN ==========\n");
	a = ft_printf("ft: |%-#12x|\n", 42);
	b = printf("pf: |%-#12x|\n", 42);
	printf("count: %d | %d\n\n", a, b);

	a = ft_printf("ft: |%-#12.8X|\n", 42);
	b = printf("pf: |%-#12.8X|\n", 42);
	printf("count: %d | %d\n\n", a, b);

	printf("========== POINTER ==========\n");
	a = ft_printf("ft: |%20p|\n", (void *)0);
	b = printf("pf: |%20p|\n", (void *)0);
	printf("count: %d | %d\n\n", a, b);

	a = ft_printf("ft: |%-20p|\n", (void *)0);
	b = printf("pf: |%-20p|\n", (void *)0);
	printf("count: %d | %d\n\n", a, b);

	return (0);
}
