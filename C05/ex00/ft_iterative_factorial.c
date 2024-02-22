/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:41:52 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/22 13:41:55 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	num;

	res = 1;
	num = nb;
	if (nb < 0)
		nb = -nb;
	if (nb == 0)
		return (0);
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	if (num % 2 != 0 && num < 0)
		return (-res);
	return (res);
}
/*
int main (void)
{
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(-3));
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
}*/
