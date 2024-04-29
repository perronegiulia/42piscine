/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:25:02 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/08/05 18:05:19 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char **argv)
{
	int		i;
	int		v;

	i = 1;
	while (i < argc - 1)
	{
		v = 1;
		while (v < argc - 1)
		{
			if (ft_strcmp(argv[v], argv[v + 1]) > 0)
			{
				ft_swap(&argv[v], &argv[v + 1]);
			}
			v++;
		}
		i++;
	}
	v = 1;
	while (v < argc)
	{
		ft_putstr(argv[v]);
		ft_putchar('\n');
		v++;
	}
	return (0);
}
