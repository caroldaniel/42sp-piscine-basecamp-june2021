/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 23:12:39 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/14 23:12:40 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_strlen(char *str);
int		ft_check_base_error(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbr_unsigned;
	unsigned int	len;

	if (ft_check_base_error(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr_unsigned = (unsigned int)(-1 * nbr);
		}
		else
			nbr_unsigned = (unsigned int)nbr;
		len = ft_strlen(base);
		if (nbr_unsigned < len)
		{
			write(1, &base[nbr_unsigned % len], 1);
		}
		else
		{
			ft_putnbr_base((nbr_unsigned / len), base);
			ft_putnbr_base((nbr_unsigned % len), base);
		}
	}
}

int	ft_check_base_error(char *str)
{
	int	i;
	int	c;
	int	len;

	i = 0;
	len = ft_strlen(str);
	if (str[i] == '\0' || len == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		c = 1;
		while (str[i + c] != '\0')
		{
			if (str[i + c] == str[i])
				return (0);
			c++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}
