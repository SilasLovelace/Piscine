/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:34:38 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/29 10:34:54 by sopperma         ###   ########.fr       */
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

char	*cpystr(char *s)
{
	char	*cpy;
	char	*start;

	cpy = malloc(ft_strlen(s) +1);
	if (!cpy)
		return (0);
	start = cpy;
	while (*s)
		*cpy++ = *s++;
	*cpy = (0);
	return (start);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;

	arr = malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (0);
	arr[ac].size = 0;
	arr[ac].str = 0;
	arr[ac].copy = 0;
	while (ac > 0)
	{
		arr[ac - 1].size = ft_strlen(av[ac - 1]);
		arr[ac - 1].str = av[ac - 1];
		arr[ac - 1].copy = cpystr(av[ac - 1]);
		ac--;
	}
	return (arr);
}

/*
int main (int argc, char **argv)
{
    if (argc >= 3)
    {
        t_stock_str *arr = ft_strs_to_tab(argc, argv);
        ft_show_tab(arr);
    }     
    else
        printf("%s", "No arguments");
}*/
