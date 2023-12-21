/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:41:40 by jmontero          #+#    #+#             */
/*   Updated: 2023/12/21 11:46:21 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

	newlst = malloc(sizeof(t_list));
	if (!newlst)
	{
		return (NULL);
	}
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}
