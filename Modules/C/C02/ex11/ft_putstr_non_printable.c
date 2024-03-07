/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:51:17 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/20 11:51:19 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char	hexa;
	unsigned char	hexb;

	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			write(1, str, 1);
		else
		{
			hexa = *str / 16 + '0';
			hexb = *str % 16;
			if (hexb < 10)
				hexb += '0';
			else
				hexb += 'a' - 10;
			write(1, "\\", 1);
			write(1, &hexa, 1);
			write(1, &hexb, 1);
		}
		str++;
	}
}
/*
void main(void)
{
char src[] = "welcome \n \t to \n me";

ft_putstr_non_printable(src);
}
*/
