/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:49:15 by sadaniel          #+#    #+#             */
/*   Updated: 2025/11/10 16:20:48 by sadaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_ src;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = len_dst;
	if (len_dst == siz)
		return (len_dst + len_src);
	if (siz >= len_dst + len_src)
	{
		while (i < siz)
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (siz > len_dst)
		dst[i] = '\0';
	return (len_dst + len_src);
}
