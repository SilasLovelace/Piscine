/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:30:56 by sopperma          #+#    #+#             */
/*   Updated: 2024/02/22 17:30:58 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{	if (index <= 1) 
        	return index;
        else
		return ft_fibonacci(index -1) + ft_fibonacci(index - 2);
}

int  main(void )
{

	printf("%d", ft_fibonacci(10));
}
