/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <saboutay@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 18:18:42 by saboutay          #+#    #+#             */
/*   Updated: 2026/11/05 18:33:12 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf_bonus.h"

int	main(void)
{
	int	m;
	int	r;
	char	*s;

	s = "SaidBoutayeb";
	printf("\n-------main--------\n");
	m = ft_printf("[%20.4s]", s);
	printf("\n%d\n", m);
	printf("\n-------rell--------\n");
	r = printf("[%20.4s]", s);
	printf("\n%d\n", r);
	return (0);
}
