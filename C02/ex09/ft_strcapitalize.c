/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:45:26 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/19 17:45:29 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	is_lower_case(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	is_upper_case(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	char	*start;
	char	cap;

	cap = 1;
	start = str;
	while (*str)
	{
		if (is_lower_case(*str) || is_upper_case(*str) || is_number(*str))
		{
			if (cap && (*str >= 'a' && *str <= 'z'))
				*str -= 32;
			else if (!cap && (*str >= 'A' && *str <= 'Z'))
				*str += 32;
			cap = 0;
		}
		else
		{
			cap = 1;
		}
		str++;
	}
	return (start);
}
/*
void main()
{
	char str[] = " welCOme tooo one+two+three:four 32pSAcDne";
	
	printf ("%s", ft_strcapitalize(str));

}
*/
