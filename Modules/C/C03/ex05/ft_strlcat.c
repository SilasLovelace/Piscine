/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:00:13 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/20 20:00:17 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	w;

	w = 0;
	while (*dest && size)
	{
		w++;
		dest++;
		size--;
	}
	while (*src && size)
	{
		w++;
		*dest++ = *src++;
		size--;
	}
	return (w);
}
/*
int main(void)
{
	char one[] = "1";
	char two[] = "22";
	printf("%d\n", ft_strlcat(one, two, 2));
	printf("%s\n", one);
	printf("%d\n", ft_strlcat(one, two, 0));
	printf("%s\n", one);
	
	return (0);
}
*/
