/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 00:39:06 by saboutay          #+#    #+#             */
/*   Updated: 2026/10/16 12:52:57 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_l;

	if (!little[0])
		return ((char *)big);
	len_l = ft_strlen(little);
	i = 0;
	while (len - i >= len_l && big[i])
	{
		if (!ft_strncmp(big + i, little, len_l))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
