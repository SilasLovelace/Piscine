/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:04:20 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/20 16:04:23 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (start);
}
/*
int main (void)
{
	char one[]= "abc";
	char two[]= "bbb";

	printf("%s", ft_strcat(two, one));
	return (0);
}
*/
