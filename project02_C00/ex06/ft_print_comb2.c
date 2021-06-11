#include <unistd.h>
void	ft_putchar (char c);
void	ft_printnums (int a, int b);
void	ft_printdigits (int c);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i;
		while (j < 100)
		{
			if (i != j)
				ft_printnums (i, j);
			j++;
		}
		i++;
	}
}

void	ft_printnums (int a, int b)
{
	ft_printdigits (a);
	ft_putchar (' ');
	ft_printdigits (b);
	if (a != 98)
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
}

void	ft_printdigits (int c)
{
	if (c < 10)
	{
		ft_putchar ('0');
		ft_putchar (c + '0');
	}
	else if (c >= 10 && c <= 99)
	{
		ft_putchar (c / 10 + '0');
		ft_putchar (c % 10 + '0');
	}
}

void	ft_putchar (char c)
{
	write(1, &c, 1);
}
