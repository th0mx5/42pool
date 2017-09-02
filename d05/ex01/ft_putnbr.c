/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 19:18:15 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/18 15:20:43 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
