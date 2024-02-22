/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:27:01 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/20 12:52:34 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*origin_dest;

	origin_dest = dest;
	while (*src && n--)
		*dest++ = *src++;
	while (n--)
		*dest++= 0;
	return (origin_dest);
}
/*
int main (){

 char str[]= "bbbbbbbb";
 char rest[] = "aaaaaaaa";
 
 printf("%s", ft_strncpy(rest, str, 32));
 return (0);
}
*/
