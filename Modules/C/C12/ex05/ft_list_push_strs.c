/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:55:17 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/05 11:55:19 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

t_list	*ft_create(char *str)
{
	t_list	*s;

	s = malloc(sizeof(t_list));
	if (!s)
		return (0);
	s->string = str;
	s->next = 0;
	return (s);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*nex;
	t_list	*start;
	int		i;

	if (size <= 0)
		return (0);
	i = 1;
	start = ft_create(strs[0]);
	nex = start;
	while (i < size)
	{
		nex->next = (ft_create(strs[i]));
		if (!nex->next)
			break ;
		nex = nex->next;
	}
	return (start);
}
