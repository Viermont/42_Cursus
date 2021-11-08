/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:52:59 by jmontero          #+#    #+#             */
/*   Updated: 2021/11/08 18:24:31 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_start(const char *s, unsigned int start, size_t len)
{
	size_t	dstlen;

	dstlen = 0;
	if (start < ft_strlen(s))
		dstlen = ft_strlen(s) - start;
	if (dstlen > len)
		dstlen = len;
	return (dstlen);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	count;
	size_t	dstlen;

	count = 0;
	if (!s)
		return (0);
	dstlen = ft_check_start(s, start, len);
	dst = (char *) malloc((dstlen + 1) * sizeof(char));
	if (!dst)
		return (0);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (ft_strlen(s) > start)
	{
		while (s[start] != '\0' && dstlen > 0)
		{
			dst[count++] = s[start++];
			dstlen--;
		}
	}
	dst[count] = '\0';
	return (dst);
}
