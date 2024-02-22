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
	char	hexa;
	char	hexb;

	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			write(1, str, 1);
		else
		{
			hexa = *str / 16 + 48;
			if (*str % 16 >= 0 && *str % 16 <= 9)
				hexb = *str % 16 + 48;
			else
				hexb = *str % 16 + 87;
			write(1, "\\", 2);
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
