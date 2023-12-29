/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:47:52 by jmontero          #+#    #+#             */
/*   Updated: 2023/12/29 09:56:05 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dst;

	if (nmemb > 0 && (size_t)-1 / nmemb < size)
		return (0);
	dst = malloc(nmemb * size);
	if (!dst)
		return (0);
	ft_bzero(dst, nmemb * size);
	return (dst);
}
