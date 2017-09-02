/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 12:33:35 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/20 19:34:10 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	i = -1;
	len = ft_strlen(src);
	dest = NULL;
	dest = (char*)malloc(sizeof(*dest) * len);
	while (i++ < len)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
