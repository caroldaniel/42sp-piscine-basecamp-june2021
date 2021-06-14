/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 23:09:33 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/14 23:09:34 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_printnum (int a, int b, int c);
void	ft_putchar (char c);

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				ft_printnum (i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}	
}

void	ft_printnum (int a, int b, int c)
{
	a += '0';
	b += '0';
	c += '0';
	ft_putchar (a);
	ft_putchar (b);
	ft_putchar (c);
	if (a != '7' || b != '8' || c != '9')
	{
		write (1, ", ", 2);
	}
}

void	ft_putchar (char c)
{
	write(1, &c, 1);
}
