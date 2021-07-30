#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*list;

	i = 0;
	list = NULL;
	while (i < size)
	{
		ft_list_push_front(&list, strs[i]);
		i++;
	}
	return (list);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		elem = ft_create_elem(data);
		elem->next = *begin_list;
		*begin_list = elem;
	}
}
