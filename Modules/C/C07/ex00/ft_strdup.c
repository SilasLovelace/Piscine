/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:21:14 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/26 16:21:19 by sopperma         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*start;

	dup = malloc(ft_strlen(src)+1);
	if (dup == 0)
		return (0);
	start = dup;
	while (*src)
		*dup++ = *src++;
	*dup = 0;
	return (start);
}
/*
int main (int argc, char *argv[])
{
	char str[] = "abcd";
	
	printf("%d", ft_strlen(str));

}*/
