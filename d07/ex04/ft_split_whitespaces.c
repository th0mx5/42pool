/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:05:52 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/22 13:25:33 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(char *str, int i)
{
	int j;

	j = 0;
	while (str[i] >= 33 && str[i] <= 126)
	{
		j++;
		i++;
	}
	return (j);
}

int		ft_count(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str != NULL && str[i] != '\0')
	{
		if ((str[i] >= 33 && str[i] <= 126) && (str[i + 1] == '\t'
					|| str[i + 1] == '\n' || str[i + 1] == '\0' ||
					str[i + 1] == ' '))
			nb++;
		i++;
	}
	return (nb);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	array = (char **)malloc(sizeof(char*) * (ft_count(str) + 1));
	while (str != NULL && str[i] != '\0')
	{
		if (str[i] >= 33 && str[i] < 126)
		{
			array[j] = (char *)malloc(sizeof(char) * ft_size(str, i) + 1);
			while ((str[i] >= 33 && str[i] <= 126) && str[i])
				array[j][k++] = str[i++];
			array[j++][k] = '\0';
		}
		k = 0;
		if (str[i++] == '\0')
			break ;
	}
	array[j] = NULL;
	return ((str == NULL) ? NULL : array);
}
