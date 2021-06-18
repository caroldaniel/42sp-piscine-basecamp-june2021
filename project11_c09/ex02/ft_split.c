/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:38:50 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/18 17:29:26 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_is_sep(char *charset, char c);
int		ft_count_split(char *str, char *charset);
int		ft_add_part(char **result, char *prev, int size, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**result;
	char	*prev;
	char	*next;
	int		size;
	int		i;

	i = 0;
	result = (char **)malloc((ft_count_split(str, charset) + 1) * \
		sizeof(char *));
	prev = str;
	next = str;
	while (1)
	{
		if (ft_is_sep(charset, *str))
			next = str;
		size = next - prev;
		if (size > 1)
			i += ft_add_part(&result[i], prev, size, charset);
		if (*str == '\0')
			break ;
		prev = next;
		str++;
	}
	result[i] = 0;
	return (result);
}

int	ft_add_part(char **result, char *prev, int size, char *charset)
{
	if (ft_is_sep(charset, prev[0]))
	{
		prev++;
		size--;
	}
	*result = (char *)malloc((size + 3) * sizeof(char));
	ft_strncpy(*result, prev, size);
	(*result)[size] = '\0';
	(*result)[size + 1] = '\0';
	return (1);
}

int	ft_is_sep(char *charset, char c)
{
	while (1)
	{
		if (*charset == '\0')
		{
			if (c == '\0')
				return (1);
			else
				return (0);
		}
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_split(char *str, char *charset)
{
	char	*prev;
	char	*next;
	int		counter;

	counter = 0;
	prev = str;
	next = str;
	while (1)
	{
		if (ft_is_sep(charset, *str))
			next = str;
		if (next - prev > 1)
			counter++;
		if (*str == '\0')
			break ;
		prev = next;
		str++;
	}
	return (counter);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
