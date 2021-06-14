/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 12:21:53 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/13 22:11:23 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "towerdoku.h"

int	main(int argc, char **argv)
{
	t_params	params;
	char		grid[4][4];
	int			i;
	int			j;

	if (argc != 2 || !arg_is_valid(argv[1], &params))
	{
		write (1, "Error\n", 6);
		return (0);
	}
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			grid[i][j] = 0;
	}
	if (!resolve(grid, &params))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_grid(grid);
	return (1);
}

int	arg_is_valid(char *argv, t_params *params)
{
	int		i;
	char	*ptr_params;

	i = -1;
	ptr_params = &params->up[0];
	while (argv[++i] != '\0')
	{
		if (i % 2 != 0 && argv[i] == ' ')
			continue ;
		if (i % 2 != 0 && argv[i] != ' ')
			return (0);
		if (i % 2 == 0 && !(argv[i] >= '1' && argv[i] <= '4'))
			return (0);
		*ptr_params = argv[i] - '0';
		ptr_params++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int	resolve(char grid[4][4], t_params *params)
{
	int	x;
	int	y;
	int	value;

	if (search_empty_case(grid, &x, &y))
	{
		value = '0';
		while (++value <= '4')
		{
			if (can_put_value(grid, x, y, value))
			{
				grid[y][x] = value;
				if (x == 3 && !line_is_valid(grid, params, y, -1))
					continue ;
				if (y == 3 && !column_is_valid(grid, params, x, -1))
					continue ;
				if (resolve(grid, params) == 1)
					return (1);
			}
		}
		grid[y][x] = 0;
		return (0);
	}
	return (1);
}

int	print_grid(char grid[4][4])
{
	int	x;
	int	y;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			write(1, &grid[y][x], 1);
			if (x != 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
	return (1);
}
