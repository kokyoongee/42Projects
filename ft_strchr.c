#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while(*s++)
	{
		if (*s == c)
			return ((char *)s);
		if (*s == '\0')
			return ((char *)NULL);
	}
	return ((char *)NULL);
}