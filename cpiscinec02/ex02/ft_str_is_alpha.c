/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:41:09 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/07/27 14:29:48 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
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
	printf("letras minusculas e maiusculas: %d\n", ft_str_is_alpha("aBc"));
	printf("letras e numeros: %d\n", ft_str_is_alpha("abc1hjd4g578AKJ"));
	printf("numeros: %d\n", ft_str_is_alpha("1235764859"));
	printf("vazio: %d\n", ft_str_is_alpha(""));
}
*/
