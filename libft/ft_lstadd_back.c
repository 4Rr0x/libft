#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst)
	{
		*lst = new;
		return ;
	}
	node = ft_lstlast(*lst);
	if (!node)
		*lst = new;
	else
		node->next = new;
}
