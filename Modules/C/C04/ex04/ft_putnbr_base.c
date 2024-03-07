/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:17:28 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/21 19:17:31 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	check_valid_base(char *base)
{
	int		l;
	char	a;
	char	*compstart;

	l = 0;
	while (*base)
	{
		l++;
		a = *base;
		compstart = base;
		if (*base == '+' || *base == '-')
			return (0);
		while (*base++)
		{
			if (a == *base)
				return (0);
		}
		base = compstart + 1;
	}
	if (l < 2)
		return (0);
	return (1);
}

void	print_base(long nbr, char *base)
{
	char	*start;
	int		l;

	start = base;
	l = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	while (*base++)
		l++;
	if (nbr >= l)
		print_base(nbr / l, start);
	write(1, (start + nbr % l), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	n = nbr;
	if (check_valid_base(base))
	{
		print_base(n, base);
	}
}
/*
int main(void)
{
	int a = 0;
	char bin[] = "01";
	char hex[] = "0123456789ABCDEF";
	char small[] = "";
	char same[] = "122222";
	char plus[] = "+234";
	
	ft_putnbr_base(a, bin);
	printf("\n");
	ft_putnbr_base(a, hex);
	printf("\n");
	ft_putnbr_base(a, small);
	printf("\n");
	ft_putnbr_base(a, same);
	printf("\n");
	ft_putnbr_base(a, plus);
	
	printf("\n");
	printf("%d", check_valid_base(small));
	printf("\n");
	printf("%d", check_valid_base(same));
	printf("\n");
	printf("%d", check_valid_base(plus));
	printf("\n");
	printf("%d", check_valid_base(bin));
	printf("\n");
	printf("%d", check_valid_base(hex));
	
}*/
