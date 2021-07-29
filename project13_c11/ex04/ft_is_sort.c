int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	inc;
	int dec;

	i = 0;
	inc = 0;
	dec = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			dec++;
		if (f(tab[i], tab[i + 1]) <= 0)
			inc++;
		i++;
	}
	if (inc == i || dec == i)
		return (1);
	return (0);
}
