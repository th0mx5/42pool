/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 17:42:02 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/11 12:19:24 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;
	int is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i] && is_alpha)
	{
		is_alpha = ft_is_alpha(str[i]);
		i++;
	}
	return (is_alpha);
}
