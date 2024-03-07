/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:21:50 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 11:21:51 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		res;
	t_list	*p;

	res = 0;
	p = begin_list;
	while (p)
	{
		res++;
		p = (*p).next;
	}
	return (res);
}
