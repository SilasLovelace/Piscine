/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:46:25 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/29 10:46:27 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

void	ft_putnbr(int a)
{
	int		b;
	long	c;

	c = a;
	b = c % 10 + '0';
	if (c < 0)
	{
		write (1, "-", 1);
		c = -c;
	}
	if (c > 10)
		ft_putnbr(c / 10);
	write (1, b, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while ((*par).str)
	{
		write (1, (*par).str, ft_strlen(par->str));
		write (1, "\n", 1);
		ft_putnbr(par->size);
		write (1, "\n", 1);
		write (1, par->copy, ft_strlen(par->str));
		write (1, "\n", 1);
		par++;
	}
}
