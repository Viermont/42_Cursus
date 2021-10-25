/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontero <jmontero@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:57:34 by jmontero          #+#    #+#             */
/*   Updated: 2021/10/25 16:54:06 by jmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
     int count;

     count = ft_strlen(s) + 1;
	 while (count--)
	 {
		 if (s[count] == (unsigned char)c)
			return ((char *)&s[count]);
	 }
     return (0);
}
