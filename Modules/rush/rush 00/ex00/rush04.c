/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:59:11 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/17 15:35:54 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_cond(char coords[], char params[])
{
	if (coords[1] == 1 && coords[0] == 1)
		ft_putchar(params[2]);
	else if (coords[1] == 1 && coords[0] == params[0])
		ft_putchar(params[3]);
	else if (coords[1] == params[1] && coords[0] == 1)
		ft_putchar(params[4]);
	else if (coords[1] == params[1] && coords[0] == params[0])
		ft_putchar(params[5]);
	else if (coords[1] == 1 || coords[1] == params[1])
		ft_putchar(params[6]);
	else if (coords[0] == 1 || coords[0] == params[0])
		ft_putchar(params[7]);
	else
		ft_putchar(params[8]);
}

void	exec_rush(char params[])
{
	char	coords[2];

	coords[0] = 1;
	coords[1] = 1;
	while (coords[1] <= params[1])
	{
		while (coords[0] <= params[0])
		{
			write_cond(coords, params);
			coords[0]++;
		}
		coords[0] = 1;
		ft_putchar('\n');
		coords[1]++;
	}
}

/*ASCII
o = 111; A = 65; B = 66; C = 67; * = 42; - = 45; | = 124; / = 47; \ = 92
*/

void	rush(int a, int b)
{
	char	params[9];

	if (a < 1 || b < 1)
		return ;
	params[0] = a;
	params[1] = b;
	params[2] = 'A';
	params[3] = 'C';
	params[4] = 'C';
	params[5] = 'A';
	params[6] = 'B';
	params[7] = 'B';
	params[8] = ' ';
	exec_rush(params);
}
