/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:29:39 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/07/26 14:42:34 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			i++;
		}
		else 
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf("letras minusculas e maiusculas: %d\n", ft_str_is_numeric("abcdefghi"));
	printf("letras e numeros: %d\n", ft_str_is_numeric("abc1hjd4g578AKJ"));
	printf("numeros: %d\n", ft_str_is_numeric("1235764859"));
	printf("vazio: %d\n", ft_str_is_numeric(""));
}
*/
