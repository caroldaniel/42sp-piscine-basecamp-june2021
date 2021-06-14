/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 23:11:39 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/14 23:11:40 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar (char c);
int		ft_char_is_printable(char c);

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	current;
	char			*hexa;

	i = 0;
	hexa = "0123456789abcdef";
	while (str[i] != '\0')
	{
		current = str[i];
		if (ft_char_is_printable(current) == 1)
			ft_putchar(current);
		else
		{
			ft_putchar('\\');
			ft_putchar(hexa[current / 16]);
			ft_putchar(hexa[current % 16]);
		}
		i++;
	}
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}		
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
