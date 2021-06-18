/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:10:28 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/17 17:00:27 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_total_len(int size, char **strs, int sep_len);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*dest;
	int		total_len;
	int		i;

	if (size == 0)
		return ((char *)malloc(1));
	total_len = ft_total_len(size, strs, ft_strlen(sep));
	str = malloc(total_len * 1);
	if (!str)
		return (0);
	dest = str;
	i = -1;
	while (++i < size)
	{
		ft_strcpy(str, strs[i]);
		str += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(str, sep);
			str += ft_strlen(sep);
		}
	}
	*str = '\0';
	return (dest);
}

int	ft_total_len(int size, char **strs, int sep_len)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		total += sep_len;
		i++;
	}
	total -= sep_len;
	return (total + 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}
