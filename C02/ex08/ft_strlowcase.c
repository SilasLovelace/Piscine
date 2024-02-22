/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:13:16 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/19 17:42:54 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
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
 printf("%s", ft_strlowcase(&str1[0]));

}
*/
