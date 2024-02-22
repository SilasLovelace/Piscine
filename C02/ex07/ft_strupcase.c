/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:13:16 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/19 17:22:48 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str != 0)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (start);
}
/*
void main(){

 char str1[] = "TesT123*%&/%&/abcABC";
 printf("%s", str1);
  printf("%s", "\n");
 ft_strupcase(&str1[0]);
 
 printf("%s", ft_strupcase(&str1[0]));

}
*/
