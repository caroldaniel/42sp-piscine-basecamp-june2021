/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 22:55:22 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/16 15:44:37 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int		size;
	char	*p_str;
	int		i;

	size = ft_strlen(src) + 1;
	p_str = malloc((size) * 1);
	i = 0;
	while (i < size)
	{
		p_str[i] = src[i];
		i++;
	}
	return (p_str);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}
