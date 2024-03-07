/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:00:02 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/16 12:36:43 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	*b_point;
	int	a;

	b_point = tab + size - 1;
	while (tab < b_point)
	{
		a = *tab;
		*tab = *b_point;
		*b_point = a;
		tab++;
		b_point--;
	}
}
/*
void main()
{
int array[] = {1,2,3,4,5};
int size = sizeof(array)/sizeof(array[0]);

for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

ft_rev_int_tab(&array, size);

for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}*/
