#include "libft.h"

static int nb_len(int nb)
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

	str = (char *)malloc(sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
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
