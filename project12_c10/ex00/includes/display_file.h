/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:14:25 by cado-car          #+#    #+#             */
/*   Updated: 2021/06/27 18:51:38 by cado-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>

# define ERR_NO_ARGUMENTS "File name missing."
# define ERR_MANY_ARGUMENTS "Too many arguments."
# define ERR_UNREADABLE "Cannot read file."

# define STDOUT 1
# define STDERR 2

void ft_putstr(int output, char *message);
int ft_display_file(char *path);

#endif
