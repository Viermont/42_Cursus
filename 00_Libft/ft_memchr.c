/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:03:29 by jmontero          #+#    #+#             */
/*   Updated: 2021/10/25 18:04:42 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while ((unsigned char *)s[count] != '\0' || count < n)
	{
		if (s[count] == (unsigned char)c)
			return ((unsigned char *)s + count); 
	}
	return (0);
}
