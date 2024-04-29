/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:56:14 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/08/01 02:40:05 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	iv;
	int	tmp;

	i = 0;
	iv = size - 1;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[iv];
		tab[iv] = tmp;
		i++;
		iv--;
	}
}

void	print(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}

int	main()
{
	int tab[7] = {7, 6, 5, 4, 3, 2, 1};

	print(tab, 7);
	ft_rev_int_tab(tab, 7);
	print(tab, 7);
}

