void	ft_sort_int_tab(int *tab, int size)
{
	int	pos_index;
	int	loop_index;
	int	temp;

	loop_index = 0;
	while (loop_index < size)
	{
		pos_index = 0;
		while (pos_index < size - loop_index - 1)
		{
			if (tab[pos_index] > tab[pos_index + 1])
			{
				temp = tab[pos_index];
				tab[pos_index] = tab[pos_index + 1];
				tab[pos_index + 1] = temp;
			}
			pos_index++;
		}
		loop_index++;
	}
}
