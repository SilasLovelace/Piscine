/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:57:07 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/20 15:57:09 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s2 && *s1 == *s2 && n-- > 0)
	{
		s1++;
		s2++;
	}
	if (!n)
		return (0);
	else
		return (*s1 - *s2);
}
/*
int main (void)
{
	char	one[0];
	char	two[0];
	char	three[] = "hello!";
	char	four[] = "helpo";

	printf("%d\n", ft_strncmp(one, two, 4));
	printf("%d\n", ft_strncmp(one, three, 6));
	printf("%d\n", ft_strncmp(three, four, 3));
	printf("%d\n", ft_strncmp(three, four, 6));
	printf("%d\n", ft_strncmp(three, one, 6));
	printf("\n");
	printf("%d\n", strncmp(one, two, 4));
	printf("%d\n", strncmp(one, three, 6));
	printf("%d\n", strncmp(three, four, 3));
	printf("%d\n", strncmp(three, four, 6));
	printf("%d\n", strncmp(three, one, 6));
	
	return (0);
}*/
