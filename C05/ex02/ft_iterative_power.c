/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:58:52 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/22 13:58:54 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	while (power--)
		res *= nb;
	return (res);
}

int main (void)
{
	printf("%d\n", ft_iterative_power(2,2));
	printf("%d\n", ft_iterative_power(1,3));
	printf("%d\n", ft_iterative_power(3,3));
	printf("%d\n", ft_iterative_power(0,0));
	printf("%d\n", ft_iterative_power(4, 0));
	printf("%d\n", ft_iterative_power(-3, 3));
	return (0);
}

