/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:53:20 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/14 22:58:14 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_solve(int grid[][10], int col, int *nbr_solutions);
int		ft_is_at_risk(int grid[][10], int at_x, int at_y);
void	ft_print_position(int grid[][10]);
void	ft_clear_grid(int grid[][10], int c_x, int c_y);

int	ft_ten_queens_puzzle(void)
{
	int	nbr_solutions;
	int	grid[10][10];
	int	column;
	int	line;

	nbr_solutions = 0;
	column = 0;
	while (column < 10)
	{
		line = 0;
		while (line < 10)
		{
			grid[line][column] = 0;
			line++;
		}
		column++;
	}
	ft_solve(grid, 0, &nbr_solutions);
	return (nbr_solutions);
}

int	ft_solve(int grid[][10], int x, int *nbr_solutions)
{
	int	y;

	if (x >= 10)
		return (1);
	y = 0;
	while (y < 10)
	{
		if (!ft_is_at_risk(grid, x, y))
		{
			grid[y][x] = 1;
			if (ft_solve(grid, x + 1, nbr_solutions))
			{
				*nbr_solutions += 1;
				ft_print_position(grid);
			}
			grid[y][x] = 0;
		}
		y++;
	}
	return (0);
}

int	ft_is_at_risk(int grid[][10], int t_x, int t_y)
{
	int	x;
	int	y;
	int	skip[2];

	skip[0] = t_y - t_x;
	skip[1] = t_y + t_x;
	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			if (y == x + skip[0] || y == -x + skip[1] || x == t_x || y == t_y)
			{
				if (grid[y][x] == 1)
					return (1);
			}
			y++;
		}
		x++;
	}
	return (0);
}

void	ft_print_position(int grid[][10])
{
	int		line;
	int		column;
	char	*base;

	line = 0;
	base = "0123456789";
	while (line < 10)
	{
		column = 0;
		while (column < 10)
		{
			if (grid[line][column] == 1)
				write(1, &base[column], 1);
			column++;
		}
		line++;
	}
	write(1, "\n", 1);
}
