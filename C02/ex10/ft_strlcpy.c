/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:07:43 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/22 16:18:05 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*start;
	unsigned int	l;
	
	size--;
	l = 0;
	start = src;
	while (*src++)
		l++;
	src = start;
	while (*src && size--)
		*dest++ = *src++;
	*dest = 0;
	return (l);
}
/*
int main(void)
{
char src[] = "welcome";
char dest[9];

printf("%d\n", sizeof(dest));
printf("%d\n", ft_strlcpy(dest, src, sizeof(dest)));
printf("%s\n", dest);

char src1[] = "welcome";
char dest1[] = "";

printf("%d", strlcpy(dest1, src1, sizeof(dest)));
printf("%s", dest1);

return (0);
}
*/
