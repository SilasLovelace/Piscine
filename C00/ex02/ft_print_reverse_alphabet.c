/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:07:08 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/15 15:54:28 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	c;

	c = 122;
	while (c > 96)
	{
		write (1, &c, 1);
		c -- ;
	}
}