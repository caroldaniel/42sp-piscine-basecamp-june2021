#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*temp;
	int		count;

	temp = begin_list;
	count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
