/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:31:51 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/21 18:31:53 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
/*
int main (void)
{
	ft_putnbr(1234);
	ft_putnbr(-1234);
}
*/