#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*next;

	current = *begin_list;
	*begin_list = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = *begin_list;
		*begin_list = current;
		current = next;
	}
}
