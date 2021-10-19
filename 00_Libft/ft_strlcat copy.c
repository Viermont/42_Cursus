/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:02:30 by jmontero          #+#    #+#             */
/*   Updated: 2021/10/19 13:18:10 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t 	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	pos;

	pos = 0;
	if (dstsize && (dstsize >= ((size_t)ft_strlen(dst))))
	{
		while (src[pos] != '\0' && pos < (dstsize - 1))
		{
			dst[pos + ft_strlen(dst)] = src[pos];
			pos++;	
		}
		dst[pos + ft_strlen(dst)] = '\0';
		return (ft_strlen(src) + dstsize);
	}
	else
		return (ft_strlen(src) + ft_strlen(dst));



}
