/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:57:58 by jmontero          #+#    #+#             */
/*   Updated: 2021/11/09 19:05:58 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	count;

	count = 0;
	if (s && fd)
	{
		while (s[count])
		{
			write(fd, &s[count], 1);
			count++;
		}
		write(fd, "\n", 1);
	}
}
