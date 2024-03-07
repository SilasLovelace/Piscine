/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:41:23 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/19 15:41:25 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != 0)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			str++;
		else
			return (0);
	}
	return (1);
}
/*
void main(){

 char str1[] = "test";
 char str2[] = "";
 char str3[] = "test123";
 
 printf("%d", ft_str_is_alpha(&str1[0]));
printf("%d", ft_str_is_alpha(&str2[0]));
printf("%d", ft_str_is_alpha(&str3[0]));
}
*/
