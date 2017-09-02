/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <thbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 13:33:21 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/22 22:18:17 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	dest = (char*)malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*args;

	i = 0;
	args = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (args == NULL)
		return (NULL);
	while (i < ac)
	{
		args[i].size_param = ft_strlen(av[i]);
		args[i].str = av[i];
		args[i].copy = ft_strdup(av[i]);
		args[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	args[i].str = 0;
	return (args);
}
