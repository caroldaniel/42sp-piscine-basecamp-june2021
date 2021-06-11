#include <unistd.h>
void	ft_putchar (char c);

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

void	ft_putchar (char c)
{
	write(1, &c, 1);
}
