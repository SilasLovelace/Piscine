/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:13:06 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/22 21:13:08 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		l;
	char	*start;

	l = 0;
	start = argv[0];
	while (*argv[0]++)
		l++;
	write (1, start, l);
	write (1, "\n", 2);
}
