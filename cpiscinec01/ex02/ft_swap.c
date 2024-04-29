/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:26:40 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/07/24 19:44:39 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	ab;
	int	ba;

	ab = *a;
	ba = *b;
	*a = ba;
	*b = ab;
}
/*
int	main()
{
	int a;
	int b;

	a = 3;
	b = 7;

	printf("antes do swap: a = %d, b = %d\n", a, b);

	ft_swap(&a, &b);

	printf("depois do swap: a = %d, b = %d\n", a, b);	
}
*/
