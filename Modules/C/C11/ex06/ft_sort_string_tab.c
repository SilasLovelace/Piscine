/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:48:05 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/04 19:48:07 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_issorted(char **tab)
{
	int	asc;
	int	desc;

	asc = 1;
	desc = 1;
	while (*(tab + 1))
	{
		if (ft_strcmp(*(tab), *(tab + 1)) < 0)
			asc = 0;
		if (ft_strcmp(*(tab), *(tab + 1)) > 0)
			desc = 0;
		tab++;
	}
	return (asc || desc);
}

void	ft_sort_string_tab(char **tab)
{
	char	*s1;
	char	**start;

	start = tab;
	while (!ft_issorted(tab))
	{
		while (*(tab + 1))
		{
			if (ft_strcmp(*(tab), *(tab + 1)) > 0)
			{
				s1 = *tab;
				*tab = *(tab + 1);
				*(tab + 1) = s1;
			}
			tab++;
		}
		tab = start;
	}
}
/*
int main(int argc, char **argv)
{
    int i = 1; // Start with the first argument after the program name
    
    ft_sort_string_tab(argv + 1); // Sort the strings starting from argv[1]
    
    while (i < argc) {
        printf("%s\n", argv[i]);
        i++;
    }
    
    return (0);
}*/
