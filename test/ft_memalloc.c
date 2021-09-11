#include <stdlib.h>
#include "../libft.h"

void *ft_memalloc(size_t len)
{
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * len);
	if(!ptr)
		return (NULL);
	ft_memset(ptr, 0, len);
	return((void *)ptr);
}

int main()
{
	char *str;

	str = (char *)ft_memalloc(sizeof(char) * 5);

}
