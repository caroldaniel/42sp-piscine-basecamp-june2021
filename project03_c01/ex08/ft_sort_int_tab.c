/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 23:10:36 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/14 23:10:37 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos_index;
	int	loop_index;
	int	temp;

	loop_index = 0;
	while (loop_index < size)
	{
		pos_index = 0;
		while (pos_index < size - loop_index - 1)
		{
			if (tab[pos_index] > tab[pos_index + 1])
			{
				temp = tab[pos_index];
				tab[pos_index] = tab[pos_index + 1];
				tab[pos_index + 1] = temp;
			}
			pos_index++;
		}
		loop_index++;
	}
}
