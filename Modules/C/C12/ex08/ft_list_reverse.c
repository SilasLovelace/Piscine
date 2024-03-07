/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:30:26 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 15:30:34 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*before;
	t_list	*next;

	current = *begin_list;
	before = 0;
	while (current)
	{
		next = current -> next;
		current -> next = before;
		before = current;
		current = next;
	}
	*begin_list = before;
}
