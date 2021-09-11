#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
	const char *s;

	s = str;
	while (*++s)
		;
	return (s - str);
}

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = dst;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

char *ft_strcpy(char *dst, const char *src)
{
	return (ft_memcpy(dst, src, ft_strlen(src) + 1));
}

char *ft_strcat(char *s1, const char *s2)
{
	ft_strcpy(s1 + ft_strlen(s1) , s2);
	return (s1);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *res;

	res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (res)
	{
		ft_strcpy(res, s1);
		ft_strcat(res, s2);
	}
	return (res);
}

int main()
{
	printf("%s\n", ft_strjoin("hello", "world"));
	printf("%d\n", ft_strlen("hello"));
}
