/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 22:54:43 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/27 18:53:26 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int main(int argc, char **argv)
{
    if (argc < 2)
        ft_putstr(STDERR, ERR_NO_ARGUMENTS);
    else if (argc > 2)
        ft_putstr(STDERR, ERR_MANY_ARGUMENTS);
    else
    {
        if (!ft_display_file(argv[1]))
            ft_putstr(STDERR, ERR_UNREADABLE);
        else
            return (0);
    }
    return (1);
}