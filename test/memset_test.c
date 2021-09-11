#include <stdio.h>
# include <unistd.h>
# include <string.h>

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

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char* ptr;

	ptr = b;
	while(len--)
		*ptr++ = c;
	return (b);
}

int main()
{
	char str[10] = "hello";
	ft_memset(str, 'c', 2);
	printf("%s", str);
}
