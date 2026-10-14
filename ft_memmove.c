/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:52:33 by saboutay          #+#    #+#             */
/*   Updated: 2026/10/14 18:07:58 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpy_from_end(unsigned char *d, const unsigned char *s, size_t n)
{
	while (n--)
		d[n] = s[n];
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (src < dest)
		ft_cpy_from_end((unsigned char *)dest, src, n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
