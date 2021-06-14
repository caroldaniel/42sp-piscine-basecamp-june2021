/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   towerdoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 12:21:36 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/14 00:16:04 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOWERDOKU_H
# define TOWERDOKU_H

typedef struct s_params
{
	char	up[4];
	char	down[4];
	char	left[4];
	char	right[4];
}
t_params;

int	arg_is_valid(char *argv, t_params *params);
int	resolve(char grid[4][4], t_params *params);
int	print_grid(char grid[4][4]);
int	column_is_valid(char grid[4][4], t_params *params, int x, int i);
int	line_is_valid(char grid[4][4], t_params *params, int y, int i);
int	can_put_value(char grid[4][4], int x, int y, int value);
int	search_empty_case(char grid[4][4], int *x, int *y);

#endif