/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:43:53 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 14:43:55 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*next;

	current = begin_list;
	while (current)
	{
		next = current->next;
		free_fct(current->data);
		free(current);
		current = next;
	}
}
