/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 02:17:02 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/16 18:10:10 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*matrix;
	int	i;
	int	range;

	if (min >= max)
	{
		matrix = NULL;
		return (matrix);
	}
	range = max - min;
	matrix = malloc(range * 4);
	i = -1;
	while (++i < range)
		matrix[i] = min + i;
	return (matrix);
}
