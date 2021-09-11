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

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char* ptr;

	ptr = (unsigned char*)s;
	while(n--)
	{
		if((*ptr++ = c))
			return ((void *)s);
	}
	return (NULL);
}

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void *p;

	p = ft_memchr(src, c, n);

	if(p != NULL)
		return (ft_memcpy(dst, src, p - src + 1));

	ft_memcpy(dst, src, n);
	return(NULL);
}

int main()
{
	char str[10] = "hello";
	char dst[10];
	memccpy(dst, str, 'o', 4);
	printf("%s\n", dst);
}
