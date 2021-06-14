/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:17:23 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/13 21:33:06 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "towerdoku.h"

int	search_empty_case(char grid[4][4], int *x, int *y)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (grid[i][j] == 0)
			{
				*x = j;
				*y = i;
				return (1);
			}
		}
	}
	return (0);
}

int	can_put_value(char grid[4][4], int x, int y, int value)
{
	int	i;

	i = -1;
	while (++i < 4)
		if (grid[y][i] == value || grid[i][x] == value)
			return (0);
	return (1);
}

int	line_is_valid(char grid[4][4], t_params *params, int y, int i)
{
	int	max_size;
	int	views;

	max_size = 0;
	views = 0;
	while (++i < 4)
	{
		views += grid[y][i] > max_size;
		if (grid[y][i] > max_size)
			max_size = grid[y][i];
	}
	if (views != params->left[y])
		return (0);
	max_size = 0;
	views = 0;
	while (--i >= 0)
	{
		views += grid[y][i] > max_size;
		if (grid[y][i] > max_size)
			max_size = grid[y][i];
	}
	if (views != params->right[y])
		return (0);
	return (1);
}

int	column_is_valid(char grid[4][4], t_params *params, int x, int i)
{
	int	max_size;
	int	views;

	max_size = 0;
	views = 0;
	while (++i < 4)
	{
		views += grid[i][x] > max_size;
		if (grid[i][x] > max_size)
			max_size = grid[i][x];
	}
	if (views != params->up[x])
		return (0);
	max_size = 0;
	views = 0;
	while (--i >= 0)
	{
		views += grid[i][x] > max_size;
		if (grid[i][x] > max_size)
			max_size = grid[i][x];
	}
	if (views != params->down[x])
		return (0);
	return (1);
}
