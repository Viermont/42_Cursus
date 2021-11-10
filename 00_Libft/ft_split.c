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
		while (s[count] == c)
			count++;
		while (s[count] != c)
			count++;
		numstr++;
	}
	return (numstr);
}

static char	**ft_substrings(char const *s, char c, size_t numstr)
{
	size_t	count;

	count = 0;
	while (s[count])
		while (s[count] && s[count] == c)
		{
			count++;
			while
			{
				s[numstr][count] = 
			}
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	count;
	size_t	numstr;

	if (!s)
		return (0);
	if (!c)
		return (s);
	numstr = ft_numstr(s, c);
	dst = (char **)malloc(sizeof(char *) * (numstr + 1));
	if (!dst)
		return (0);
	ft_substrings(s, c, numstr);


}
