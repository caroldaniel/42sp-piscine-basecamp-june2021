/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 17:46:30 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/14 18:06:39 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_prime(unsigned int nb, unsigned int rad);

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
