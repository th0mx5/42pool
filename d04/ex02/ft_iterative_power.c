/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 13:19:42 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/06 14:27:36 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		result = 0;
	else if (power >= 0)
		result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
