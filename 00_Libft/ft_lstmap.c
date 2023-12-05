/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:56:50 by jmontero          #+#    #+#             */
/*   Updated: 2023/12/05 11:53:35 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;

	while (lst && f && del)
	{
		aux = malloc(sizeof(t_list));
		if (!aux)
		{
			return (NULL);
		}
		aux->content = f(lst->content);
		aux->next = NULL;
		del(lst->content);
		lst = lst->next;
	}
}
