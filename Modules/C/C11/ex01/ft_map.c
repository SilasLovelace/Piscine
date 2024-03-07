/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:58:13 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/03 15:58:15 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*a;
	int	c;

	c = 0;
	a = malloc(length * sizeof(int));
	if (!a)
		return (0);
	while (c < length)
	{
		a[c] = f(tab[c]);
		c++;
	}
	return (a);
}
