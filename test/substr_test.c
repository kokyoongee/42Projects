#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	new_len;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)strlen(s) < start)
		return (strdup(""));
	new_len = strlen(s + start);
	if (new_len < len)
		len = new_len;
	if (!(substr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	strlcpy(substr, s + start, len + 1);
	return (substr);
}

int main()
{
	printf("%s\n", ft_substr("hello world, hello there", 3, 5));
}
