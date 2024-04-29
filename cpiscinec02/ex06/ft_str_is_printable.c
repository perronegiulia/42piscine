/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:01:33 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/07/27 15:10:30 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;	

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main ()
{
	printf("printables and non printables: %d\n", ft_str_is_printable("hd\nhf"));
	printf("printables: %d\n", ft_str_is_printable("hdhsjssjd"));
	printf("vazio: %d\n", ft_str_is_printable(""));
}
*/
