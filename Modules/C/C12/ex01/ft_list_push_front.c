/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:15:49 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 11:15:51 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return ;
	(*new).data = data;
	(*new).next = *begin_list;
	(*begin_list) = new;
}
