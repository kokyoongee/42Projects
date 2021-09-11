#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

int	main(void)
{
	char	*src;
	char	dst[10];

	src = strlen("hello");
	ft_memcpy(dst, src, 5);
	printf("%s\n", dst);
}
