/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:54:08 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/14 17:45:25 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_babylon(int nb, long double guess, long double prev_guess);

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	else
		return (ft_babylon(nb, 100, 0));
}

int	ft_babylon(int nb, long double guess, long double prev_guess)
{
	if (guess * guess <= 2147483647 && (int)guess * (int)guess == nb)
		return ((int)guess);
	if ((int)guess == (int)prev_guess)
		return (0);
	else
		return (ft_babylon(nb, (guess + nb / guess) / 2, guess));
}
