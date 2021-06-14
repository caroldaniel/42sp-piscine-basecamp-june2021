/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 10:30:51 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/14 10:55:43 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	i = nb;
	total = nb;
	if (nb <= 0)
		return (0);
	while (--i > 0)
		total *= i;
	return (total);
}
