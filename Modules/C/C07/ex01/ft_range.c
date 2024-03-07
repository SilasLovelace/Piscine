/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:37:43 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/26 16:37:46 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	c;

	if (min >= max)
		return (0);
	c = 0;
	arr = malloc((max - min) * 4);
	if (arr == 0)
		return (0);
	while (min < max)
	{
		arr[c++] = min++;
	}
	return (arr);
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
