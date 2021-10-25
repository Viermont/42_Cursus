/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:19:45 by jmontero          #+#    #+#             */
/*   Updated: 2021/10/25 15:00:43 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int	count;
	char a;

	a = c + '0';
	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == a)
		return ((char *)(s + count));
		count++;
	}
	return (0);
}
