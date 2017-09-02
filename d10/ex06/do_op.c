/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 17:23:02 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/21 17:23:53 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_putnbr(int nb)
{
	unsigned int u_nb;

	u_nb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		u_nb = -nb;
	}
	if (u_nb > 9)
	{
		ft_putnbr(u_nb / 10);
		ft_putnbr(u_nb % 10);
	}
	if (u_nb < 10)
	{
		ft_putchar(u_nb + '0');
	}
}

int		ft_atoi(char *str)
{
	int is_negative;
	int i;
	int integer;

	is_negative = 0;
	i = 0;
	integer = 0;
	while ((str[i] <= 32 && str[i] >= 0) || str[i] == 127)
		i++;
	if (str[i] == '-')
		is_negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		integer = integer * 10 + (str[i] - '0');
		i++;
	}
	if (is_negative)
		integer = integer * -1;
	return (integer);
}
