/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_is_lowercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 17:42:02 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/08 18:21:17 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_lowercase(char c)
{
	if ((c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;
	int is_lowercase;

	i = 0;
	is_lowercase = 1;
	while (str[i] && is_lowercase)
	{
		is_lowercase = ft_char_is_lowercase(str[i]);
		i++;
	}
	return (is_lowercase);
}
