/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:47:32 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/20 16:47:34 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*p1;
	char	*p2;

	while (*str)
	{
		p1 = str;
		p2 = to_find;
		while (*p1 && *p1 == *p2)
		{
			p2++;
			p1++;
		}
		if (!*p2)
			return (str);
		str++;
	}
	return (0);
}
/*
int main(void) {

	char one[] = "111222333";
	char two[] = "222";
	char three[] = "";
	char four[] = "333";
	char five[] = "12";
	char six[] = "";

	printf("%s\n", ft_strstr(one, two));
	printf("%s\n", ft_strstr(one, three));
	printf("%s\n", ft_strstr(one, four));
	printf("%s\n", ft_strstr(one, five));
	printf("%s\n", ft_strstr(three, six));
	printf("\n");
	printf("%s\n", strstr(one, two));
	printf("%s\n", strstr(one, three));
	printf("%s\n", strstr(one, four));
	printf("%s\n", strstr(one, five));
	printf("%s\n", strstr(three, six));

	return (0);
}
*/
