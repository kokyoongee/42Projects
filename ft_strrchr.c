#include "libc.h"

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
