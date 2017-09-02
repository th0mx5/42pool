/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 17:42:02 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/13 13:20:06 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_printable(char c)
{
	if ((c >= 0 && c <= 31) || c == 127)
	{
		return (0);
	}
	return (1);
}

int		ft_str_is_printable(char *str)
{
	int i;
	int is;

	i = 0;
	is = 1;
	while (str[i] && is)
	{
		is = ft_char_is_printable(str[i]);
		i++;
	}
	return (is);
}
