/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:36:33 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/20 15:36:36 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int main (void)
{
	char	one[0];// = "hello";;
	char	two[0];// = "hello";
	char	three[7] = "Hello!";

	printf("%d", ft_strcmp(one, two));
	printf("%d", ft_strcmp(one, three));
	
	return (0);
}
*/
