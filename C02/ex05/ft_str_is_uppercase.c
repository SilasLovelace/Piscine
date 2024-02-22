/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:13:16 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/19 16:57:29 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else
			return (0);
	}
	return (1);
}
/*
void main(){

 char str1[] = "TesT";
  char str2[] = "";
 char str3[] = "test123";
 char str4[] = "test";
 char str5[] = "TEST";
 
 printf("%d", ft_str_is_uppercase(&str1[0]));
printf("%d", ft_str_is_uppercase(&str2[0]));
printf("%d", ft_str_is_uppercase(&str3[0]));
printf("%d", ft_str_is_uppercase(&str4[0]));
printf("%d", ft_str_is_uppercase(&str5[0]));
}
*/
