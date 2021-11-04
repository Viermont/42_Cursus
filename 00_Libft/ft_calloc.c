#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dst;

	dst = malloc(nmemb * size);
	if (!dst)
		return (0);
	ft_bzero(dst, nmemb * size);
	return (dst);
}
