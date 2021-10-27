/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:46:54 by jmontero          #+#    #+#             */
/*   Updated: 2021/10/27 13:35:54 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if ((*(unsigned char *)(s1 + count)) !=
				(*(unsigned char *)(s2 + count)))
			return ((*(unsigned char *)(s1 + count)) -
					(*(unsigned char *)(s2 + count)));
		count++;
	}
	return (0);
}
