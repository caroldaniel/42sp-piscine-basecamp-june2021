#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*temp;

	while (begin_list != NULL)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		free_fct(temp);
	}
}
