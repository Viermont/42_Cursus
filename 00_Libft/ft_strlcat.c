/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:02:30 by jmontero          #+#    #+#             */
/*   Updated: 2021/10/22 14:58:50 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	posdst;
	size_t	possrc;

	posdst = ft_strlen(dst);
	possrc = 0;
	if (dstsize > ft_strlen(dst))
	{	
		while (dst[posdst] != '\0' && ft_strlen(src) < (dstsize - 1))
		{
			dst[posdst] = src[possrc];
			posdst++;
			possrc++;
		{
		dst[posdst] = '\0';
		return (ft_strlen(src) + tf_strlen(dst));
	}

	
//	size_t  pos;
//	size_t	d;
//	size_t	s;
//	
//	d = ft_strlen(dst);
//	s = ft_strlen(src);
//	pos = 0;
//
//	if (d >= dstsize)
//		return (dstsize + s);
//	while (d < (dstsize - 1) && src[pos] != '\0') 
//	{
//		dst[d] = src[pos];
//		pos++;
//		d++;
//
//	}
//	dst[d] = '\0';
//	return (d + s);
//
//}	
//	if (dstsize && (((size_t)ft_strlen(dst)) > dstsize))
//		return (ft_strlen(src) + dstsize);
//	else
//	{
  //     	while (src[pos] != '\0' && pos < (dstsize - 1))
    //    {
      //  	dst[pos + ft_strlen(dst)] = src[pos];
        //	pos++;
//		}
 //		dst[pos + ft_strlen(dst)] = '\0';
   //     return (ft_strlen(src) + ft_strlen(dst));
//	}
