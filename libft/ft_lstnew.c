#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pnode;

	pnode = (t_list *)malloc(sizeof(t_list));
	if (pnode == NULL)
		return (NULL);
	pnode->content = content;
	pnode->next = NULL;
	return (pnode);
}
