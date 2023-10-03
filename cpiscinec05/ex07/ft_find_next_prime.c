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

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= (nb / i))
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int main()
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (ft_is_prime(n))
    {
        printf("%d is a prime number.\n", n);
        printf("The next prime number is %d\n", ft_find_next_prime(n + 1));
    }
    else
    {
        int nextprime = ft_find_next_prime(n);
        printf("The next prime number after %d is %d\n", n, nextprime);
    }
    
    return 0;
}*/
