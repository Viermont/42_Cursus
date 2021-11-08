#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;

	dst = malloc(ft_strlen(s) + 1);
	if (!dst)
		return (0);
	return (ft_memcpy(dst, s, ft_strlen(s) + 1));
}
