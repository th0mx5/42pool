/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 17:42:02 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/11 12:14:32 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;
	int is_numeric;

	i = 0;
	is_numeric = 1;
	while (str[i] && is_numeric)
	{
		is_numeric = ft_char_is_numeric(str[i]);
		i++;
	}
	return (is_numeric);
}
