/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:58:26 by jmontero          #+#    #+#             */
/*   Updated: 2021/11/09 20:34:13 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*dst;
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
	n = n / 10;
	len++;
	}
	dst = (char *) malloc(sizeof(char) * len);
//	if (dst)
//	{
		dst = ft_itoa(n);
		ft_putstr_fd(dst, fd);
//	}
}
