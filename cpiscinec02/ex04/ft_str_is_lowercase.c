/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:45:49 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/07/26 15:25:26 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	printf("minusculas e maiusculas: %d\n", ft_str_is_lowercase("aHbGefghi"));
	printf("minusculas, maiusculas e numeros: %d\n", ft_str_is_lowercase("a1J"));
	printf("numeros: %d\n", ft_str_is_lowercase("1235764859"));
	printf("minusculas: %d\n", ft_str_is_lowercase("abcdefgh"));
	printf("vazia: %d\n", ft_str_is_lowercase(""));
}
*/
