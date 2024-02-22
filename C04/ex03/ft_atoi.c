/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:48:24 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/21 18:48:28 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int		n;
	char	sign;

	n = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == ' ' )
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + *str - '0';
		str++;
	}
	return (n * sign);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("1234AS"));
	printf("%d\n", ft_atoi("--1234	ASD"));
	printf("%d\n", ft_atoi("     	\n+---+1234asd"));
	return (0);
}
*/
