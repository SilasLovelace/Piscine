/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:25:19 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/21 18:25:22 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str && len <= 2147483647)
		len++;
	return (len);
}
/*
int main() {
    printf("Maximum value of int: %u\n", UINT_MAX);
    printf("Maximum value of int: %d\n", INT_MAX);
    return 0;
}
*/
