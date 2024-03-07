/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:17:26 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 17:17:28 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	clean(t_list *current, void (*free_fct)(void *))
{
	free_fct(current -> data);
	free(current);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*before;

	current = *begin_list;
	before = 0;
	while (current)
	{
		if (cmp(current->data, data_ref))
		{
			if (!before)
				*begin_list = current -> next;
			else
				before -> next = current -> next;
			clean(current, free_fct);
		}
		else
		{
			before = current;
			current = current -> next;
		}
	}
}
