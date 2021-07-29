#ifndef DOOP_H
# define DOOP_H

void	ft_do_op(int a, int b, char op);
int		operation(int a, int b, int (*f)(int, int));
int		addition(int a, int b);
int		subtraction(int a, int b);
int		multiplication(int a, int b);
int		modulo(int a, int b);
int		division(int a, int b);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);


#endif