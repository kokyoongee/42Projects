#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr++ = c;
		if (*ptr == c)
			return ((void *)s);
	}
	return (NULL);
}
