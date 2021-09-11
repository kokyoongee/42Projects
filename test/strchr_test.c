#include <stdio.h>
#include <string.h>

//char	*ft_strchr(const char *s, int c)
//{
//	char ch;

//	ch = c;
//	while(*s++)
//	{
//		if (*s == ch)
//			return ((char *)s);
//		if (*s == '\0')
//			return (NULL);
//	}
//}

char	*ft_strrchr(const char *s, int c)
{
	char *save;

	while (*s++)
	{
		if (*s == c)
			save = (char *)s;
	}
	return (save);
}

int main()
{
	char *str = "hello";

	printf("%p\n", ft_strrchr(str, 'l'));
	printf("%p\n", str + 3);
}
