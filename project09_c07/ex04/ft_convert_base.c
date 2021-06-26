/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:10:39 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/26 10:58:03 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int		ft_is_whitespace(char c);
int		ft_strlen(char *str);
int		ft_is_base_valid(char *base);
int		ft_convert_from_base(char *str, char *base);
char	*ft_convert_to_base(char *base, int nbr, int signal);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				i;
	int				signal;
	int				rad;
	int				result;

	if (!ft_is_base_valid(base_from) || !ft_is_base_valid(base_to))
		return (NULL);
	signal = 1;
	rad = ft_strlen(base_from);
	result = 0;
	i = 0;
	while (ft_is_whitespace(nbr[i]) == 1)
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			signal *= -1;
		i++;
	}
	result = ft_convert_from_base(&nbr[i], base_from);
	if (result == 0)
		signal = 1;
	return (ft_convert_to_base(base_to, result, signal));
}

int	ft_is_base_valid(char *base)
{
	int	i;
	int	c;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (base[i] == '\0' || len == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || ft_is_whitespace(base[i]) == 1)
			return (0);
		c = 1;
		while (base[i + c] != '\0')
		{
			if (base[i + c] == base[i])
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

int	ft_is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}
