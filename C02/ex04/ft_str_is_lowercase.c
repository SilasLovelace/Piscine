/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:13:16 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/19 16:13:18 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != 0)
	{
		if (*str >= 'a' && *str <= 'z')
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
 
 printf("%d", ft_str_is_lowercase(&str1[0]));
printf("%d", ft_str_is_lowercase(&str2[0]));
printf("%d", ft_str_is_lowercase(&str3[0]));
printf("%d", ft_str_is_lowercase(&str4[0]));
}
*/
