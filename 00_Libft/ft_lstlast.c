/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 06:40:13 by jmontero          #+#    #+#             */
/*   Updated: 2023/12/04 11:51:41 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	size;
	size_t	count;

	count = 1;
	size = ft_lstsize(lst);
	while (count < size)
	{
		lst = lst->next;
		count++;
	}
	return (lst);
}
