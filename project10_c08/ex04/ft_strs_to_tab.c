/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:34:41 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/18 16:34:42 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
int		ft_strlen(char *str);
char	*ft_strdup(char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*matrix;

	matrix = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		matrix[i].size = ft_strlen(av[i]);
		matrix[i].str = av[i];
		matrix[i].copy = ft_strdup(av[i]);
		i++;
	}
	matrix[i] = (struct s_stock_str){0, 0, 0};
	return (matrix);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*p_str;
	int		i;

	size = ft_strlen(src) + 1;
	p_str = malloc((size) * 1);
	i = 0;
	while (i < size)
	{
		p_str[i] = src[i];
		i++;
	}
	return (p_str);
}
