/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:49:42 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/22 21:49:44 by sopperma         ###   ########.fr       */
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
	argc--;
	while (argc > 0)
	{
		write(1, argv[argc], len(argv[argc]));
		write(1, "\n", 2);
		argc--;
	}
}
