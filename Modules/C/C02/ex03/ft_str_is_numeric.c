/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:10:19 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/19 16:10:23 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != 0)
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}

/*
void main(){

 char str1[] = "123";
 char str2[] = "";
 char str3[] = "test123";
 
 printf("%d", ft_str_is_numeric(&str1[0]));
printf("%d", ft_str_is_numeric(&str2[0]));
printf("%d", ft_str_is_numeric(&str3[0]));
}
*/
