/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:08:22 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/07/26 12:50:41 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char src[] = "abcdef";
	char dest[] = "Giulia";
	printf("source: %s\n", src);
	printf("destiny: %s\n", dest);
	printf("strncpy: %s\n", ft_strncpy(dest, src, 7));
	printf("teste: %s\n", strncpy(dest, src, 7));
}

