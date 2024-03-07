/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:49:24 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/26 16:49:26 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	size;
	int	c;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	arr = malloc(size * 4);
	if (!arr)
	{
		*range = 0;
		return (-1);
	}
	c = 0;
	while (min < max)
		arr[c++] = min++;
	*range = arr;
	return (size);
}
/*
int main (int argc, char *argv[])
{
	int min = -5;
	int max = 5;
	int c = 0;
	
	int *arr = ft_range(min, max);
	while (c <(max-min))
		printf("%d\n", arr[c++]);
}*/
