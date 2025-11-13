/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:57:53 by sadaniel          #+#    #+#             */
/*   Updated: 2025/11/13 12:47:52 by sadaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*p;

	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	p = str;
	while (len--)
	{
		*p = s[start];
		p++;
		start++;
	}
	*p = '\0';
	return (str);
}
