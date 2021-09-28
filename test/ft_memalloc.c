#include <stdlib.h>
#include "../libft.h"

void *ft_malloc(size_t len)
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
	int trigger;
	char *str;

	str = (char *)ft_malloc(sizeof(char) * 5);
	trigger =ft_isalnum('a');

}
