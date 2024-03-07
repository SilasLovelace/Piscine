/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:47:01 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/04 18:47:03 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "math.h"
#include <unistd.h>

int	add(int a, int b)
{
	return (a + b);
}

int	subtract(int a, int b)
{
	return (a - b);
}

int	multiply(int a, int b)
{
	return (a * b);
}

int	divide(int a, int b)
{
	return (a / b);
}

int	modulo(int a, int b)
{
	return (a % b);
}
