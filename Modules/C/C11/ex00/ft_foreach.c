/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:39:04 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/03 15:39:05 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void ft_putnbr (int i)
{
	char	c;
	
	if (i >= 10)
		ft_putnbr(i/10);
	c = i % 10 + '0';
	write (1, &c, 1);
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
int main()
{
	int ar[] = {1,2, 3};
	
	ft_foreach(ar, 3, &ft_putnbr);
}*/
