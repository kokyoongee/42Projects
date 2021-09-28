#include "../libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

void toUpperAlt(unsigned int n, char *c)
{
	if(n%2 == 0)
	{
		*c = *c - 32;
	}
}

int main()
{

	char str[] = "hello";
	ft_striteri(str, toUpperAlt);
	printf("%s\n", str);
}
