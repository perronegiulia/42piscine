/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:42:15 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/07/24 12:12:03 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putint(int d)
{
	char	r;

	if (d > 9)
		return ;
	r = '0' + d;
	write(1, &r, 1);
}

void	put2int(int d)
{
	putint(d / 10);
	putint(d % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;	

	a = -1;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			put2int(a);
			putchar(' ');
			put2int(b);
			if (a < 98)
				write(1, ", ", 2);
		}
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
