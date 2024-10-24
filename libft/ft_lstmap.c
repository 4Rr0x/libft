#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *save;

	if (!lst || !f || !del)
		return (0);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (0);
	save = new_list;
	lst = lst->next;
	while (lst)
	{
		new_list->next = ft_lstnew(f(lst->content));
		if (!new_list->next)
		{
			ft_lstclear(&save, del);
			return (0);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	new_list->next = NULL;
	return (save);
}
/*
int	main(void)
{
	return (0);	
}*/
