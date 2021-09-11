#include "libft.h"

char	*ft_strcpy(char * dst, const char * src)
{
	return ((char *)ft_memcpy(dst, src, ft_strlen(src) + 1));
}
