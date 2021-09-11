#include <stdio.h>
#include <sys/cdefs.h>
#include <string.h>


//int
//ft_strncmp5(const char *s1, const char *s2, register size_t n)
//{
//  unsigned char *u1, *u2;
//  u1 = (unsigned char *) s1;
//  u2 = (unsigned char *) s2;
//  while (n-- > 0)
//    {

//      if (*u1++ != *u2++)
//        return u1 - u2;
//      if (u1 == '\0')
//        return 0;
//    }
//  return 0;
//}

int
ft_strncmp6(s1, s2, n)
	const char *s1, *s2;
	size_t n;
{
	while(n--)
	{
		if (*s1 != *s2++)
			return (*(unsigned char *)s1 - *(unsigned char *)--s2);
		if (*s1++ == 0)
			break;
	}
	return (0);
}

int
ft_strncmp4(s1, s2, n)
	register const char *s1, *s2;
	register size_t n;
{

	if (n == 0)
		return (0);
	do {
		if (*s1 != *s2++)
			return (*(unsigned char *)s1 - *(unsigned char *)--s2);
		if (*s1++ == 0)
			break;
	} while (--n != 0);
	return (0);
}

int		ft_strncmp3(char *s1, char *s2, unsigned int n)
{
	unsigned int	i = 0;
	int				r;

	r = 0;
	while ((s1[i] || s2[i]) && r == 0 && i < n)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}

int	ft_strncmp2(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	result;
	unsigned int	i;

	result = 0;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			result = (unsigned char )s1[i] - (unsigned char )s2[i];
			break ;
		}
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (result);
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while(n--)
	{
		if (*s1 != *s2++)
			return (*(unsigned char *)s1 - *(unsigned char *)--s2);
		if (*s1++ == 0)
			break;
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_strncmp("hello", "hello world", 6));
}
