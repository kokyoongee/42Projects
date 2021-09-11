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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char tmp[len];
    ft_memcpy(tmp,src, len);
    ft_memcpy(dst,tmp,len);
    return dst;
}

int main()
{
	char src[10] = "hello";
	ft_memmove(src+2, src, 5 );
	printf("%s", src);
}


// https://clc-wiki.net/wiki/C_standard_library:string.h:memmove
