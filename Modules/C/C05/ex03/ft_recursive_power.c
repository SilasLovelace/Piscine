/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:58:09 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/22 16:58:11 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (!power)
		res = 1;
	else
		res = nb;
	if (power)
		res *= (ft_recursive_power(nb, power - 1));
	return (res);
}
/*
int main (void)
{
	printf("%d\n", ft_recursive_power(2,2));
	printf("%d\n", ft_recursive_power(1,3));
	printf("%d\n", ft_recursive_power(3,3));
	printf("%d\n", ft_recursive_power(0,0));
	printf("%d\n", ft_recursive_power(4, 0));
	printf("%d\n", ft_recursive_power(-3, 3));
	return (0);
}
*/
