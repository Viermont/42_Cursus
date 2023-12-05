/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:54:07 by jmontero          #+#    #+#             */
/*   Updated: 2023/12/05 10:20:48 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	while (*lst && del)
	{
		(del)((*lst)->content);
		free(*lst);
		(*lst) = ((*lst)->next);
	}
	(*lst) = NULL;
}
