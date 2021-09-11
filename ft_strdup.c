#include "libft.h"

char	*ft_strdup(char *s1)
{
	size_t	len;
	void	*new;

	len = strlen(s1) + 1;
	new = malloc(len);
	if (new == NULL)
		return (NULL);
	return ((char *)ft_memcpy(new, s1, len));
}
