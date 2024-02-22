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
	while (*dest && size-- > 0)
	{
		w++;
		dest++;
	}
	while (*src && size-- > 0)
	{
		w++;
		*dest++ = *src++;
	}
	*dest = 0;
	return (w);
}
/*
int main(void)
{
	char one[] = "111";
	char two[] = "222";
	printf("%d\n", ft_strlcat(one, two, 5));
	printf("%s\n", one);
	
	
	printf("%d\n", strlcat(one, two, 5));
	printf("%s\n", one);
	
	
	printf("%d\n", ft_strlcat(one, two, 0));
	printf("%s\n", one);
	
	printf("%d\n", strlcat(one, two, 0));
	printf("%s\n", one);
	return (0);
}
*/
