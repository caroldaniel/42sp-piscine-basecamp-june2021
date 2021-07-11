/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:18:06 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/26 22:16:45 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int ft_display_file(char *path)
{
    int     fd;
    int     byte_read;
    char    buffer;

    fd = open(path, O_RDONLY);
    if (fd < 0)
        return (0);
    while ((byte_read = read(fd, &buffer, 1)) > 0)
    {
        if (byte_read < -1)
            return (0);
        write(STDOUT, &buffer, 1);
    }
    close(fd);
    return (1);
}
