void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	temp;

	i = 0;
	n = size / 2;
	while (i < n)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}
