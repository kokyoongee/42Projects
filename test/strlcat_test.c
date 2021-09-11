#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = strlen(src);
	dstlen = strnlen(dst, dstsize);
	if (dstlen == dstsize)
		return (dstsize + srclen);
	if (srclen < dstsize - dstlen)
	{
		memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		memcpy(dst + dstlen, src, dstsize - 1);
		dst[dstlen + dstsize - 1] = '\0';
	}
	return (dstlen + srclen);
}


int main()
{
	char dst[7] = "hello";
	char src[6] = "world";

	ft_strlcat(dst, src, 7);
	printf("%s\n", dst);
}
