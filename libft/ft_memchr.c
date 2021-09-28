#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	ch;
	size_t			i;

	src = (unsigned char *)s;
	ch = c;
	i = 0;
	while (i < n)
	{
		if (src[i] == ch)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
