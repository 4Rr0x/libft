#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	i;
	
	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
