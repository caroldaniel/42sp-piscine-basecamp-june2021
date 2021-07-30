#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*temp;

	temp = *begin_list;
	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		elem = ft_create_elem(data);
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = elem;
		elem->next = NULL;
	}
}
