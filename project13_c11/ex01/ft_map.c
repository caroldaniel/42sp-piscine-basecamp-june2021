/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:19:10 by cado-car          #+#    #+#             */
/*   Updated: 2021/07/29 18:19:11 by cado-car         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*mtab;
	int	i;

	if (length <= 0)
		return (NULL);
	mtab = (int *)malloc(length * sizeof(int));
	i = -1;
	while (++i < length)
		mtab[i] = f(tab[i]);
	return (mtab);
}
