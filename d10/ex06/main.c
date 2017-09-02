/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 13:49:00 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/21 17:21:39 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

int	main(int ac, char **av)
{
	int		a;
	int		b;
	char	op;

	if (ac != 4)
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	op = av[2][0];
	if (op == '+')
		ft_putnbr(ft_add(a, b));
	if (op == '-')
		ft_putnbr(ft_add(a, -b));
	if (op == '*')
		ft_putnbr(ft_mult(a, b));
	if (op == '/' && b != 0)
		ft_putnbr(ft_div(a, b));
	if (op == '%' && b != 0)
		ft_putnbr(ft_mod(a, b));
	if (op == '/' && b == 0)
		write(1, "Stop : division by zero", 23);
	if (op == '%' && b == 0)
		write(1, "Stop : modulo by zero", 21);
	return (0);
}
