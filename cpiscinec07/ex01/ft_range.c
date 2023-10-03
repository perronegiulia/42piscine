/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:06:14 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/08/10 15:13:50 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	length;
	int				*arr;
	unsigned int	i;

	i = 0;
	if (max <= min)
	{
		return (NULL);
	}
	length = max - min;
	arr = malloc(length * sizeof(int));
	if (!arr)
		return (0);
	while (i < length)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>

int main()
{
    int *array = ft_range(0, 0);
    int length = 0 - 0; // Calculate the length of the array
    for (int i = 0; i < length; i++)
    {
        printf("%i\n", array[i]);
    }

    free(array); // Don't forget to free the allocated memory
    return 0;
}*/
