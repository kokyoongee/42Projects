#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char* ptr;

	ptr = s;
	while(n--)
	{
		if(*ptr++ = c)
			return (s);
	}
	return (NULL);
}

int main()
{
	char str[10] = "hello";
	char *dst;
	dst = memchr(str, 'z', 3);
	printf("%s\n", dst);
}
