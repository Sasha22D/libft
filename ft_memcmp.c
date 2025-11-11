/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:23:07 by sadaniel          #+#    #+#             */
/*   Updated: 2025/11/11 17:40:57 by sadaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*o;
	size_t	i;

	i = 0;
	p = (unsigned char *)s1;
	o = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((p[i] || o[i]) && i <= n)
	{
		if (p[i] != o[i])
			return (p[i] - o[i]);
		else
			i++;
	}
	return (p[i] - o[i]);
}
#include <stdio.h>
#include <string.h>

int	main()
{
	char str[] = "Sasha DANIEL";
	char str2[] = "Sasha12345";
	printf("%d\n", ft_memcmp(str, str2, 10));
	printf("%d\n", memcmp(str, str2, 10));
}
