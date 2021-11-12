/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:02:30 by jmontero          #+#    #+#             */
/*   Updated: 2021/11/12 19:08:40 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	posdst;
	size_t	possrc;

	posdst = ft_strlen(dst);
	possrc = 0;
	if (dstsize <= posdst)
		return (dstsize + ft_strlen(src));
	while (src[possrc] != '\0' && posdst < (dstsize - 1))
	{
		dst[posdst] = src[possrc];
		posdst++;
		possrc++;
	}
	dst[posdst] = '\0';
	return (ft_strlen(&src[possrc]) + ft_strlen(dst));
}
