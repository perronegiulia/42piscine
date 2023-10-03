/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:52:28 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/08/07 20:11:53 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	tmp;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	i = 1;
	tmp = 1;
	while (i <= nb)
	{
		tmp = tmp * i;
		i++;
	}
	return (tmp);
}
/*
int main()
{
	int nb = 12;
	printf("%i\n", ft_iterative_factorial(nb));
}
*/
