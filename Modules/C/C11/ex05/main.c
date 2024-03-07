/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:41:10 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/04 18:41:12 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "math.h"

void	doop(char *one, int a, int b, int (*operation[])(int, int))
{
	if (*one == '+')
		ft_putnbr(operation[0](a, b));
	else if (*one == '-')
		ft_putnbr(operation[1](a, b));
	else if (*one == '*')
		ft_putnbr(operation[2](a, b));
	else if (*one == '/')
	{
		if (b == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(operation[3](a, b));
	}
	else if (*one == '%')
	{
		if (b == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(operation[4](a, b));
	}
	else
		write(1, "0", 2);
}

int	main(int argc, char *argv[])
{
	int	(*operation[5])(int, int);
	int	a;
	int	b;

	operation[0] = add;
	operation[1] = subtract;
	operation[2] = multiply;
	operation[3] = divide;
	operation[4] = modulo;
	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		doop(argv[2], a, b, operation);
		write(1, "\n", 1);
	}
}
