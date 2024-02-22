/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:13:06 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/22 21:49:16 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int		l;
	char	*start;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

int	main(int argc, char *argv[])
{
	int	n;

	n = 0;
	while (n < argc)
	{
		write(1, argv[n], len(argv[n]));
		write(1, "\n", 2);
		n++;
	}
}
