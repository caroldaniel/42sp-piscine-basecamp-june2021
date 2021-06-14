/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 23:11:44 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/14 23:11:45 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);
void	ft_put_address(void *addr);
void	ft_put_content(void *addr, int size);
void	ft_put_text(void *addr, unsigned int size);

void 	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	nbr_char;
	unsigned int	offset;

	offset = 0;
	while (size > 0)
	{
		if (size < 16)
		{
			nbr_char = size;
			size = 0;
		}
		else
		{
			nbr_char = 16;
			size -= 16;
		}
		ft_put_address(addr + offset);
		write(1, ": ", 2);
		ft_put_content(addr + offset, nbr_char);
		ft_put_text(addr + offset, nbr_char);
		ft_putchar('\n');
		offset += 16;
	}
	return (addr);
}

void	ft_put_text(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*char_addr;

	char_addr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		if ((char_addr[i] >= 0 && char_addr[i] < 32) || char_addr[i] == 127)
		{
			ft_putchar('.');
			i++;
		}
		else
		{
			ft_putchar(char_addr[i]);
			i++;
		}
	}
}

void	ft_put_content(void *addr, int size)
{
	int				i;
	unsigned char	*char_addr;
	unsigned char	*hexa;
	unsigned char	current;

	hexa = (unsigned char *)"0123456789abcdef";
	i = 0;
	char_addr = (unsigned char *)addr;
	while (i < size)
	{
		current = char_addr[i];
		ft_putchar(hexa[current / 16]);
		ft_putchar(hexa[current % 16]);
		if ((i % 2) == 1)
			ft_putchar(' ');
		i++;
	}
	while (i < 16)
	{
		ft_putchar(' ');
		i++;
	}	
}

void	ft_put_address(void *addr)
{
	int		hexa_addr[16];
	long	lon_addr;
	int		index;
	char	*hexa;

	hexa = "0123456789abcdef";
	lon_addr = (long)addr;
	index = 15;
	while (lon_addr > 0)
	{
		hexa_addr[index] = lon_addr % 16;
		lon_addr = lon_addr / 16;
		index--;
	}
	while (index > 0)
	{
		hexa_addr[index] = 0;
		index--;
	}
	hexa_addr[index] = 0;
	while (index < 16)
	{
		ft_putchar(hexa[hexa_addr[index]]);
		index++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
