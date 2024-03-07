/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:09:16 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 17:09:17 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
void *data_ref, int (*cmp)())
{
	t_list	*current;

	current = begin_list;
	while (current)
	{
		if (cmp(current -> data, data_ref) == 0)
			f(current -> data);
		current = current -> next;
	}
}
