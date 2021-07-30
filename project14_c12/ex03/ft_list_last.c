#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*temp;

	temp = begin_list;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
