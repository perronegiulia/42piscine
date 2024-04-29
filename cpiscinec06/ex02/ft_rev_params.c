/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:40:49 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/08/01 17:10:57 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char*argv[])
{
	int	i;
	int	v;

	v = argc - 1;
	while (v > 0)
	{
		i = 0;
		while (argv[v][i] != '\0')
		{
			write(1, &argv[v][i], 1);
			i++;
		}
		write(1, "\n", 1);
		v--;
	}
}
