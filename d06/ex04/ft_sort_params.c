/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:48:06 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/15 16:42:08 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	**ft_sort_params(char **params, int nb);

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	argv = ft_sort_params(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int value;

	i = 0;
	j = 0;
	value = 0;
	while (s1[i] && s2[i])
	{
		value = s1[i] - s2[i];
		if (value)
			return (value);
		i++;
	}
	return (0);
}

char	**ft_sort_params(char **params, int nb)
{
	int		i;
	int		moves;
	char	*tmp;

	i = 1;
	moves = 1;
	while (moves)
	{
		moves = 0;
		while (i < nb - 1)
		{
			if (ft_strcmp(params[i], params[i + 1]) > 0)
			{
				moves = 1;
				tmp = params[i];
				params[i] = params[i + 1];
				params[i + 1] = tmp;
			}
			i++;
		}
		i = 1;
	}
	return (params);
}
