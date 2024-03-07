/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:19:32 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/26 19:19:35 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

long	arlen(char **s, int size)
{
	long	c;

	c = 0;
	while (size > 0)
	{
		c += (ft_strlen(*s));
		s++;
		size--;
	}
	return (c);
}

int	writesep(char *s, char *sep)
{
	int	c;

	c = 0;
	while (*sep)
	{
		*s++ = *sep++;
		c++;
	}
	return (c);
}

char	*empty_string(void)
{
	char	*str;

	str = malloc(1);
	*str = 0;
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*start;

	if (size <= 0)
		return (empty_string());
	str = malloc(arlen(strs, size) + (ft_strlen(sep) * (size - 1)) + 1);
	start = str;
	while (size > 0)
	{
		while (**strs)
		{
			*str = **strs;
			(*strs)++;
			str++;
		}
		strs++;
		size--;
		if (size)
			str += writesep(str, sep);
		else
			*str = 0;
	}
	return (start);
}
/*
int main()
{
	char *s[] = {"1234", "456"};
	char *x = "---";

	printf("%ld\n", arlen(s, 2));
	printf("%s\n", ft_strjoin(2, s, x));
}*/
