#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*mtab;
	int	i;

	if (length <= 0)
		return (NULL);
	mtab = (int *)malloc(length * sizeof(int));
	i = -1;
	while (++i < length)
		mtab[i] = f(tab[i]);
	return (mtab);
}
