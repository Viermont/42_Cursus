/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:54:30 by jmontero          #+#    #+#             */
/*   Updated: 2021/11/10 15:09:06 by jmontero         ###   ########.fr       */
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
	if (s[count] == '\0')
		return (numstr);
	while (s[count])
	{
		while (s[count] != c)
			count++;
		while (s[count] == c)
			count++;
		numstr++;
	}
	return (numstr);
}

static char	**ft_submallocs(char **dst, char const *s, char c, size_t numstr)
{
	size_t	count;
	size_t	start;
	size_t	finish;
	size_t	num;

	count = 0;
	num = 0;
	while (numstr > 0)
	{
		while (s[count] == c)
			count++;
		start = count;
		while (s[count] != c)
			count++;
		finish = count - 1;
		dst[num] = (char *)malloc(sizeof(char *) * (finish - start));
		numstr--;
		dst = ft_substrings(dst, s, start, finish, num);
		num++;
	}
	return (dst);

static char	**ft_substrings(char **dst, char const *s, size_t start, size_t finish, size_t a)
{
	size_t	b;

	b = 0;
	while (start <= finish)
	{
		dst[a][b] = s[start];
		b++;
		start++;
	}
	dst[a][b] = '\0';	
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
