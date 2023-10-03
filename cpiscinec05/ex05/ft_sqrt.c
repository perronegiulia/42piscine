/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 00:57:03 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/08/10 01:06:19 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	sqrt;
	long	n;

	n = nb;
	sqrt = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb >= 2)
	{
		while (sqrt * sqrt <= n)
		{
			if ((sqrt * sqrt) == n)
				return (sqrt);
			sqrt++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = ft_sqrt(num);

    if (result != 0)
    {
        printf("Square root of %d is %d\n", num, result);
    }
    else
    {
        printf("No exact square root found for %d\n", num);
    }

    return 0;
}*/
