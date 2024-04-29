/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:16:02 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/07/25 13:19:26 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	cont1;
	int	cont2;

	cont1 = 0;
	while (cont1 < size)
	{
		cont2 = cont1 + 1;
		while (cont2 < size)
		{
			if (tab[cont1] > tab[cont2])
			{
				tmp = tab[cont1];
				tab[cont1] = tab[cont2];
				tab[cont2] = tmp;
			}
			cont2++;
		}
		cont1++;
	}
}
/*
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
	ft_sort_int_tab(tab, 7);
	print(tab, 7);
}
*/
