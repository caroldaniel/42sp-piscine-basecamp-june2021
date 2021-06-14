/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:10:43 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/14 18:30:44 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
int	ft_check_prime(unsigned int nb, unsigned int rad);

int	ft_find_next_prime(int nb)
{
	int	found;
	int	next_nb;

	found = 0;
	next_nb = nb;
	while (!found)
	{
		if (next_nb == 2147483647)
			return (2147483647);
		if (ft_is_prime(++next_nb))
			return (next_nb);
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	return (ft_check_prime((unsigned int)nb, 2));
}

int	ft_check_prime(unsigned int nb, unsigned int rad)
{
	if (nb % rad == 0)
		return (0);
	if (rad * rad > nb)
		return (1);
	return (ft_check_prime(nb, rad + 1));
}
