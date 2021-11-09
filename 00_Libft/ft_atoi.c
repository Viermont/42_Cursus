/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:00:24 by jmontero          #+#    #+#             */
/*   Updated: 2021/11/09 17:32:25 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t				pos;
	int					posneg;
	unsigned long long	n;

	pos = 0;
	posneg = 1;
	n = 0;
	if (nptr[pos] == '\0')
		return (0);
	while ((nptr[pos] >= 9 && nptr[pos] <= 13) || nptr[pos] == 32)
		pos++;
	if (nptr[pos] == '+' || nptr[pos] == '-')
	{
		if (nptr[pos] == '-')
			posneg = -1;
		pos++;
	}
	while (nptr[pos] >= '0' && nptr[pos] <= '9')
	{
		n = (nptr[pos] - 48) + n * 10;
		pos++;
	}
	return (n * posneg);
}
