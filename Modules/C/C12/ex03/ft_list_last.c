/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:02 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 11:27:03 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*p;

	if (begin_list == 0)
		return (0);
	p = begin_list;
	while (p->next)
	{
		p = p->next;
	}
	return (p);
}
