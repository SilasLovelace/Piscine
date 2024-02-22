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
	char	*start;
	char	*temp_to_find;

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
}
/*
int main(void) {

	char one[] = "111222333";
	char two[] = "222";
	char four[] = "333";
	char five[] = "12";

	printf("%s\n", ft_strstr(one, four));
	printf("%s\n", ft_strstr(one, two));
	printf("%s\n", ft_strstr(one, five));
	
	printf("%s\n", strstr(one, four));
	printf("%s\n", strstr(one, two));
	printf("%s\n", strstr(one, five));
	
	char one[] = "";
	char two[] = "";
	char four[] = "333";
	char five[] = "12";

	printf("%s\n", ft_strstr(one, four));
	printf("%s\n", ft_strstr(one, two));
	printf("%s\n", ft_strstr(one, five));
	
	printf("%s\n", strstr(one, four));
	printf("%s\n", strstr(one, two));
	printf("%s\n", strstr(one, five));
	
	return (0);
}
*/
