void	ft_putchar(char c);
void	put_line (char begin, char fill, char end, int x);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0)
	{
		while (i < y)
		{
			if (i == 0)
			{
				put_line('A', 'B', 'C', x);
			}
			else if (i > 0 && i < y - 1)
			{
				put_line('B', ' ', 'B', x);
			}
			else
			{
				put_line('A', 'B', 'C', x);
			}
			i++;
		}
	}
}

void	put_line (char begin, char fill, char end, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar(begin);
		}
		else if (i > 0 && i < x - 1)
		{
			ft_putchar(fill);
		}
		else
		{
			ft_putchar(end);
		}
		i++;
	}
	ft_putchar ('\n');
}
