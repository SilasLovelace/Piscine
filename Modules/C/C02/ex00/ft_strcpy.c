/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:44:14 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/18 15:45:47 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*origin_dest;

	origin_dest = dest;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (origin_dest);
}
/*
void main (){

 char str[]= "bub";
 char rest[]= "asdasdasdasdad";
 printf(rest);
 printf("\n");
 printf("%s", ft_strcpy(rest, str));

}*/
