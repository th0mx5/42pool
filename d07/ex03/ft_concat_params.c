/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:47:02 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/22 18:14:51 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (dest[len])
		len++;
	while (src[i])
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

int		ft_count_c(int argc, char **argv)
{
	int i;
	int j;
	int count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		count = count + j;
		i++;
	}
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*str;

	str = (char*)malloc(sizeof(*str) * (argc * (ft_count_c(argc, argv) + 1)));
	i = 1;
	if (argc < 2)
		return (str);
	while (i < argc - 1)
	{
		ft_strcat(str, argv[i]);
		ft_strcat(str, "\n");
		i++;
	}
	ft_strcat(str, argv[i]);
	return (str);
}
