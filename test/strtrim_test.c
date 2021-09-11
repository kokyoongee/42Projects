#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int			ft_getstart(const char *s1, const char *set)
{
	size_t	len;
	const char *s;

	s = s1;
	len = strlen(s1);
	while (len--)
	{
		if (strchr(set, *s++) == 0)
			break ;
	}
	return (s  - s1 - 1);
}

int			ft_getend(const char *s1, const char *set)
{
	size_t	len;
	const char *s;

	s = s1;
	while(*s++)
	;
	len = strlen(s1);
	while (len--)
	{
		if (strchr(set, *--s) == 0)
			break ;
	}
	return (s - s1 + 1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*newstr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (strdup(s1));
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start >= end)
		return (strdup(""));
	newstr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (newstr == NULL)
		return (NULL);
	strlcpy(newstr, s1 + start, end - start + 1);
	return (newstr);
}

int main()
{
	char *str = "hello";
	printf("%s\n", ft_strtrim("heeeeehello h worldheeh", "he"));

	printf("%c\n", *str++);
}

// implemetation to be considered https://github.com/opencoff/ifscand/blob/master/lib/strtrim.c
