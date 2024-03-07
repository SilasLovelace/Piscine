/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:16:53 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/04 15:18:11 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	is_seperator(char *str, char *charset)
{
	while (*charset)
	{
		if (*charset == *str)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

int	countwords(char*str, char *charset)
{
	int	c;

	if (!*charset && !*str)
		return (0);
	else if (!*charset)
		return (1);
	c = 0;
	while (*str)
	{
		if (is_seperator(str, charset))
			str ++;
		else
		{
			c++;
			while (!is_seperator(str, charset))
				str++;
		}
	}
	return (c);
}

char	*cpystr(char *str, char *charset)
{
	char	*cpy;
	char	*start;
	int		c;
	int		strlen;

	strlen = 0;
	c = 0;
	start = str;
	while (*str && !is_seperator(str, charset))
	{
		str++;
		strlen++;
	}
	str = start;
	cpy = malloc ((strlen + 1) * sizeof(char));
	if (!cpy)
		return (0);
	while (c < strlen)
	{
		cpy[c] = str[c];
		c++;
	}
	cpy[c] = 0;
	return (cpy);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		c;
	int		w;

	w = 0;
	c = countwords(str, charset);
	arr = malloc((c + 1) * sizeof(char *));
	if (!arr)
		return (0);
	arr[c] = 0;
	while (w < c)
	{
		while (*str && is_seperator(str, charset))
			str++;
		if (*str)
		{
			arr[w] = cpystr(str, charset);
			w++;
			while (*str && !is_seperator(str, charset))
				str++;
		}
	}
	return (arr);
}
/*
int main (int argc, char **argv)
{
	printf("%d\n", argc);
	printf("%d\n", countwords(argv[1], argv[2]));
	char	**arr = ft_split(argv[1], argv[2]);
	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);
	//printf("%s\n", arr[3]);
	//printf("%d\n", is_seperator(argv[1], argv[2]));
	//printf("%d\n", count_seperators(argv[1], argv[2]));
}*/
