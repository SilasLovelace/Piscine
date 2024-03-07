/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:32:47 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/06 13:32:48 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>

void	putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	f;
	if (argc == 1)
	{
		putstr("File name missing.");
	}
	if (argc == 2)
	{
		f = open(argv[1], O_RDONLY);
		if (f == -1)
			putstr("Cannot read file.");
		close(f);
	}
	if (argc > 2)
	{
		putstr("Too many arguments.");
	}

	return (0);
}
