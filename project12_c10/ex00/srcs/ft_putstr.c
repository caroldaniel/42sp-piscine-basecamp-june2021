/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:23:08 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/27 18:52:15 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void    ft_putstr(int output, char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(output, &str[i], 1);
        i++;
    }
}