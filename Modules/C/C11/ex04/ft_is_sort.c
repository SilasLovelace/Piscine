/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:30:24 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/03 17:30:26 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int	i;
	int	non_decreasing;
	int	non_increasing;

	i = 0;
	non_decreasing = 1;
	non_increasing = 1;
	while (i < length - 1 && (non_decreasing || non_increasing))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			non_decreasing = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			non_increasing = 0;
		i++;
	}
	return (non_decreasing || non_increasing);
}
