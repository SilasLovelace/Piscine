/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:59:31 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/29 15:59:33 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	res;

	res = 0;
	if (nb == 0 || nb > 2147395600)
		return (0);
	if (nb == 1)
		return (1);
	while (res < nb / 2 + 1)
	{
		if (res * res == nb)
			return (res);
		else
			res++;
	}
	return (0);
}
/*
int main (void)
{
	printf("%d\n", ft_sqrt(INT_MIN));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(-16));
	printf("%d\n", ft_sqrt(INT_MAX));
	return (0);
}*/
