/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:49:25 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/22 13:49:27 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;
	int	num;

	res = nb;
	num = nb;
	if (nb < 0)
		nb = -nb;
	if (nb == 0)
		return (0);
	if (nb > 1)
		res *= ft_recursive_factorial(nb - 1);
	else
		return (1);
	if (num % 2 != 0 && num < 0)
		return (-res);
	return (res);
}
/*
int main (void)
{
	printf("%d\n", ft_recursive_factorial(4));
	printf("%d\n", ft_recursive_factorial(-4));
	printf("%d\n", ft_recursive_factorial(0));
	return (0);
}
*/
