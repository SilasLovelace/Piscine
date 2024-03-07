/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:18:56 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/04 21:18:58 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "math.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	let;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	let = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	let = nb % 10 + '0';
	write(1, &let, 1);
}

int	ft_atoi(char *str)
{
	int		n;
	int		sign;

	n = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == ' ' )
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n * sign);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
