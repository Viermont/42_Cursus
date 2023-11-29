/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:41:40 by jmontero          #+#    #+#             */
/*   Updated: 2023/11/29 00:10:32 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *nlst;

	nlst = malloc(sizeof(t_list));
	if (!nlst) return (NULL);
	nlst->content = content;
	nlst->next = NULL;
	return (nlst);
}
