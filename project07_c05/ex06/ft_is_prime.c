/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 17:46:30 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/15 12:01:10 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_prime(unsigned int nb, unsigned int rad);

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
