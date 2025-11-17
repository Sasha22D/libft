/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:45:37 by sadaniel          #+#    #+#             */
/*   Updated: 2025/11/17 18:10:58 by sadaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst)
		return (NULL);
	while (lst)
	{
		new = malloc(sizeof(t_list));
		if (!new)
			return (NULL);

	}
	new->next = NULL;
	return (new);
}
