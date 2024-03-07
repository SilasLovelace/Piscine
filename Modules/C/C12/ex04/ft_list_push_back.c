/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:45:01 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 11:45:03 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*p;
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return ;
	new -> data = data;
	new -> next = 0;
	if (*begin_list == 0)
		*begin_list = new;
	else
	{
		p = *begin_list;
		while (p->next)
		{
			p = p->next;
		}
		p->next = new;
	}
}
