#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (i < maxlen)
	{
		if (*s++ == '\0')
			break ;
		i++;
	}
	return (i);
}
