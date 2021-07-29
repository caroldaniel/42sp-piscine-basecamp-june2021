/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:19:46 by cado-car          #+#    #+#             */
/*   Updated: 2021/07/29 18:25:11 by cado-car         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, char**argv)
{
	if (argc != 4)
		return (0);
	if ((ft_strlen(argv[2]) == 1) && (*argv[2] == '+' || *argv[2] == '-' || \
		*argv[2] == '*' || *argv[2] == '%' || *argv[2] == '/'))
		ft_do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), *argv[2]);
	else
		return (0);
}

void	ft_do_op(int a, int b, char op)
{
	if (op == '+')
		ft_putnbr(operation(a, b, addition));
	else if (op == '-')
		ft_putnbr(operation(a, b, subtraction));
	else if (op == '*')
		ft_putnbr(operation(a, b, multiplication));
	else if (op == '%')
	{
		if (b == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(operation(a, b, modulo));
	}
	else if (op == '/')
	{
		if (b == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(operation(a, b, division));
	}
	ft_putstr("\n");
}

int	operation(int a, int b, int (*f)(int, int))
{
	return (f(a, b));
}
