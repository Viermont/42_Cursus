/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:54:30 by jmontero          #+#    #+#             */
/*   Updated: 2024/01/03 17:53:07 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numstr(char const *s, char c)
{
	size_t	count;
	size_t	numstr;

	count = 0;
	numstr = 0;
	while (s[count] && s[count] == c)
		count++;
	while (s[count])
	{
		while (s[count] != c && s[count])
			count++;
		while (s[count] == c && s[count])
			count++;
		numstr++;
	}
	return (numstr);
}

static char	*ft_substrings(char const *s, size_t start, size_t finish)
{
	size_t	b;
	char	*dst;

	b = 0;
	dst = (char *)malloc(sizeof(char) * (finish - start + 1));
	if (!dst)
		return (0);
	while (start < finish)
	{
		dst[b] = s[start];
		b++;
		start++;
	}
	dst[b] = '\0';
	return (dst);
}

static void	ft_dstfree(char **dst, size_t num)
{
	while (num > 0)
	{
		free(dst[num - 1]);
		num--;
	}
	free(dst);
}

static char	**ft_submallocs(char **dst, char const *s, char c, size_t numstr)
{
	size_t	count;
	size_t	start;
	size_t	finish;
	size_t	num;

	count = 0;
	num = 0;
	while (numstr--)
	{
		while (s[count] == c && s[count] != '\0')
			count++;
		start = count;
		while (s[count] != c && s[count] != '\0')
			count++;
		finish = count;
		dst[num] = ft_substrings(s, start, finish);
		if (!dst[num])
		{
			ft_dstfree(dst, num);
			return (NULL);
		}
		num++;
	}
	dst[num] = NULL;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	numstr;

	if (!s)
		return (0);
	numstr = ft_numstr(s, c);
	dst = (char **)malloc(sizeof(char *) * (numstr + 1));
	if (!dst)
		return (0);
	dst = ft_submallocs(dst, s, c, numstr);
	return (dst);
}
