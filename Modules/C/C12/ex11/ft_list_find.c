/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:13:57 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 17:13:59 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;

	current = begin_list;
	while (current)
	{
		if (cmp(current -> data, data_ref) == 0)
			return (current);
		current = current -> next;
	}
	return (0);
}
