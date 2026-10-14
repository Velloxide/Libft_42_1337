/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:18:17 by saboutay          #+#    #+#             */
/*   Updated: 2026/10/14 11:31:49 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d2;
	const unsigned char	*s2;

	if (!dest && !src)
		return (NULL);
	d2 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	while (n--)
		*d2++ = *s2++;
	return (dest);
}
