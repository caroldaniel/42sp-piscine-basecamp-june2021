/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 02:25:47 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/17 16:51:29 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{	
	int	dif;
	int	i;
	int	*matrix;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dif = max - min;
	matrix = malloc(dif * 4);
	i = -1;
	if (matrix == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (++i < dif)
		matrix[i] = min + i;
	*range = matrix;
	return (dif);
}
