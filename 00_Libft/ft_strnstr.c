/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:59:59 by jmontero          #+#    #+#             */
/*   Updated: 2023/11/29 16:01:56 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	c1;
	size_t	c2;

	c1 = 0;
	if (s2[c1] == '\0')
		return ((char *)s1);
	while (s1[c1] != '\0')
	{
		c2 = 0;
		while (s1[c1 + c2] == s2[c2] && (c1 + c2) < len)
		{
			if (s2[c2 + 1] == '\0')
				return ((char *)&s1[c1]);
			c2++;
		}
		c1++;
	}
	return (0);
}
