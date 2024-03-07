/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:57:58 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 17:58:01 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	current = *begin_list1;
	while (current -> next)
	{
		current = current -> next;
	}
	current -> next = begin_list2;
}
