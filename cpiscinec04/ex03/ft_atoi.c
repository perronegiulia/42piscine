/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:27:36 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/08/02 13:52:39 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	parity;
	int	nb;

	nb = 0;
	parity = nb;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb = nb * 10;
		nb = nb + *str - '0';
		++str;
	}
	if (!(parity % 2))
		return (nb);
	return (-nb);
}

int	main ()
{
	char	*s = " 	 ---+-  -+1234ab567";
	printf("%d\n", ft_atoi(s));
}

