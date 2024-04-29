/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:23:03 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/07/26 22:34:12 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//:q#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char aux[] = "ABCDEFGH";
	char *p = ft_strlowcase(aux);

	printf("%s\n", p);
}
*/
