/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:53:34 by jmontero          #+#    #+#             */
/*   Updated: 2021/11/12 19:10:45 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	count;
	size_t	finish;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	count = 0;
	finish = ft_strlen(s1) + ft_strlen(s2);
	dst = (char *) malloc((finish + 1) * sizeof(char));
	if (!dst)
		return (0);
	while (s1[count] != '\0')
	{
		dst[count] = s1[count];
		count++;
	}
	dst[finish] = '\0';
	while (finish > count)
		dst[count++] = s2[i++];
	return (dst);
}
