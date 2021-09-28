#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = 0;
	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *)malloc(sizeof(char) * total);
	if (result)
	{
		while (s1[i])
		{
			result[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			result[i + j] = s2[j];
			j++;
		}
		result[i + j] = '\0';
		return (result);
	}
	return (NULL);
}
