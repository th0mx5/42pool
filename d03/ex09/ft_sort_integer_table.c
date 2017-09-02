/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:35:56 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/09 21:04:12 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int moves;
	int tmp;

	i = 0;
	moves = 1;
	while (moves)
	{
		moves = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				moves = 1;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		i = 0;
	}
}
