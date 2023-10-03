/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:52:03 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/08/09 23:55:58 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen2( char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

long	ft_strlen(int size, char **str)
{
	long	i;
	long	len;
	long	v;

	i = 0;
	len = 0;
	v = 0;
	while (i < size)
	{
		while (str[i][v])
		{
			v++;
			len++;
		}
		i++;
		v = 0;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	long	i;
	long	dup_i;

	dup_i = 0;
	i = 0;
	dup_i = ft_strlen2(dest);
	while (src[i])
	{
		dest[dup_i + i] = src[i];
		i++;
	}
	dest[dup_i + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		v;
	char	*na;
	int		s_ma;

	v = 0;
	if (size == 0)
	{
		na = malloc(1);
		na[0] = '\0';
		return (na);
	}
	s_ma = ft_strlen2(sep) * (size - 1) + ft_strlen(size, strs) + 1; 
	na = malloc(s_ma * sizeof(char));
	na[0] = '\0';
	if (!na)
		return (0);
	while (v < size)
	{
		ft_strcat(na, strs[v]);
		if (v != size - 1)
			ft_strcat(na, sep);
		v++;
	}
	return (na);
}
/*
#include <stdio.h>

int main ()
{
  char *strs[] = {"oi", "gian", "baitola"};
  char *sep = "  *  ";
  char *newstr = ft_strjoin(3, strs,  sep);
  printf("%s", newstr);
  free(newstr);
  return(0);
}
*/
