/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:56:45 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/07/24 20:05:49 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main ()
{
	int div;
	int mod;
	int a;
	int b;
	ft_div_mod(47, 10, &div, &mod);
	printf("divisao: %d\nmodulo: %d\n", div, mod);
}
*/
