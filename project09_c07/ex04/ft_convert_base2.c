/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:10:45 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/17 02:30:52 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdlib.h>
int	ft_strlen(char *str);
int	ft_nbrlen(unsigned int nbr, int rad, int signal);
int	ft_is_base(char c, char *base);

int	ft_convert_from_base(char *str, char *base)
{
	int	i;
	int	c;
	int	total;

	i = 0;
	total = 0;
	while (ft_is_base(str[i], base) == 1)
	{
		c = 0;
		while (base[c] != str[i])
			c++;
		total *= ft_strlen(base);
		total += c;
		i++;
	}
	return (total);
}

char	*ft_convert_to_base(char *base, unsigned int nbr, int signal)
{
	int		rad;
	int		len;
	char	*str;
	int		i;

	rad = ft_strlen(base);
	len = ft_nbrlen(nbr, rad, signal);
	str = malloc((len + 1) * 1);
	if (!str)
		return (0);
	i = 0;
	if (signal < 0)
	{
		str[0] = '-';
		i = 1;
	}	
	str[len] = '\0';
	while (--len >= 0 + i)
	{
		str[len] = base[nbr % rad];
		nbr /= rad;
	}
	return (str);
	free(str);
}

int	ft_nbrlen(unsigned int nbr, int rad, int signal)
{
	unsigned int	len;

	len = 0;
	while (nbr > 0)
	{
		len++;
		if (nbr / rad == 0)
			break ;
		nbr /= rad;
	}
	if (signal >= 0)
		return (len);
	else
		return (len + 1);
}

int	ft_is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}
