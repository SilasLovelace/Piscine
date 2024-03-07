/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:01:58 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 18:01:59 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_sorted(t_list **begin_list, int (*cmp)())
{
	t_list	*current;

	current = *begin_list;
	while (current -> next)
	{
		if (cmp(current -> data, current -> next ->data) > 0)
			return (0);
		current = current -> next;
	}
	return (1);
}

void	swap(t_list *current, t_list *last, t_list **begin)
{
	t_list	*third;

	if (last)
	{
		third = current ->next ->next;
		last -> next = current -> next;
		current ->next ->next = current;
		current ->next = third;
	}
	else
	{
		third = current ->next ->next;
		*begin = current -> next;
		current ->next ->next = current;
		current ->next = third;
	}
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	t_list	*third;
	t_list	*last;

	current = *begin_list;
	last = 0;
	while (!is_sorted(begin_list, cmp))
	{
		while (current ->next)
		{
			if (cmp(current -> data, current -> next ->data) < 0)
				swap(current, last, begin_list);
			else
			{
				last = current;
				current = current -> next;
			}
		}
		current = *begin_list;
		last = 0;
	}
}
