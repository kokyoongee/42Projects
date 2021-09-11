
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t ret;

	ret = 0;
	while(*str++)
		ret++;
	return(ret);
}

size_t
ft_strnlen(const char *s, size_t maxlen)
{
	size_t i;

	i = 0;
	while(i < maxlen)
	{
		if(*s++ == '\0')
			break;
		i++;
	}
	return (i);
}

int main()
{
	char* str = "hello";
	printf("%zu\n", ft_strnlen(str, 3));
}
