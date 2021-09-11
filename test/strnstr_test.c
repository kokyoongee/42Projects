#include <string.h>
#include <stdio.h>

char *
strnstr(const char *s, const char *find, size_t slen)
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = strlen(find);
		do {
			do {
				if (slen-- < 1 || (sc = *s++) == '\0')
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

char *
strnstr2(const char *haystack, const char *needle, size_t slen)
{
	char c, sc;
	size_t len;

	if ((c = *needle++) != '\0') {
		len = strlen(needle);
		do {
			do {
				if (slen-- < 1 || (sc = *haystack++) == '\0')
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(haystack, needle, len) != 0);
		haystack--;
	}
	return ((char *)haystack);
}

char	*strnstr3(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char*)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

char	*strnstr4(const char *haystack, const char *needle, size_t len)
{
	while (strncmp(haystack++, needle, strlen(needle)) != 0)
	{
		if(*haystack == '\0')
			return (NULL);
	}
	return ((char *)haystack);
}

int main()
{
	printf("%s\n", strnstr4("hello world, hello man", "world", 11));

}
