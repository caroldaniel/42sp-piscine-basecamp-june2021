#include "ft_list.h"

t_list	*ft_list_at(t_list	*begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*temp;

	i = 0;
	temp = begin_list;
	while (i < nbr)
	{
		temp = temp->next;
		if (temp == NULL)
			return (0);
		i++;
	}
	return (temp);
}
