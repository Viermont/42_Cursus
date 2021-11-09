/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:28:57 by jmontero          #+#    #+#             */
/*   Updated: 2021/11/09 17:29:15 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counter(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_exceptions(int n)
{
	char	*dst;

	if (n == 0)
	{
		dst = (char *) malloc(sizeof(char) * 2);
		if (!dst)
			return (0);
		dst[0] = '0';
		dst[1] = '\0';
	}
	if (n == -2147483648)
	{
		dst = (char *) malloc(sizeof(char) * 12);
		if (!dst)
			return (0);
		ft_strlcpy(dst, "-2147483648", 12);
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*dst;
	size_t	len;

	if (n == 0 || n == -2147483648)
		return (ft_exceptions(n));
	len = ft_counter(n);
	dst = (char *) malloc(sizeof(char) * len + 1);
	if (!dst)
		return (0);
	if (n < 0)
	{
		dst[0] = '-';
		n *= -1;
	}
	dst[len] = '\0';
	len--;
	while (n > 0)
	{
		dst[len] = '0' + (n % 10);
		n = n / 10;
		len--;
	}
	return (dst);
}
