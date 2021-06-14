/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:11:03 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/14 11:19:23 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;

	i = 0;
	total = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++i < power)
		total *= nb;
	return (total);
}
