/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:08:16 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 15:08:17 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		i;
	t_list	*current;

	current = begin_list;
	i = 0;
	while (current != 0 && i < nbr)
	{
		current = current -> next;
		i++;
	}
	return (current);
}
