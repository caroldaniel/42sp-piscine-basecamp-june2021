/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:10:43 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/16 01:39:46 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	rad;

	rad = 2;
	if (nb < 2)
		return (0);
	while (rad <= nb / 2)
	{
		if (nb % rad == 0)
			return (0);
		rad++;
	}
	return (1);
}
