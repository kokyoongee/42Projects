#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

//void	*ft_memcpy(void *dst, const void *src, size_t n)
//{
//	char		*d;
//	const char	*s;

//	d = dst;
//	s = src;
//	while (n--)
//		*d++ = *s++;
//	return (dst);
//}

//size_t	ft_strlen(const char *str)
//{
//	const char *s;

//	s = str;
//	while(*++s)
//	;
//	return(s - str);
//}


//char	*ft_strcpy(char * dst, const char * src)
//{
//	return (ft_memcpy(dst, src, ft_strlen(src) + 1));
//}

int nb_len(int nb)
{
	int len;

	len = 0;
	if(nb < 0)
		len++;
	while(nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	char *str;
	int len;

	len = nb_len(n);

	str = ft_malloc(sizeof(char) * (len + 1));
	str[len--] = '\0';
	if(n == -2147483648)
	{
		return (ft_strcpy(str, "-2147483648"));
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n == 0)
		return(ft_strcpy(str, "0"));
	while(len)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}
	return(str);
}


char* ft_strmapi(char const* s, char (*f)(unsigned int, char))
{
	size_t len;
	size_t i;
	char* str;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	str = (char*)ft_malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, f);
	printf("%s\n", str2);
}
