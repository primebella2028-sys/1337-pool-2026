/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 07:24:49 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/07 07:45:59 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
		
	}
}
#include <stdio.h>

int main()

{
	int	array[] = {9,8,66,37,9,26,1};
	int *tab = array;

	ft_sort_int_tab(tab,7);

	int 	i;

	i = 0;
	while (i < 7)
	{
		printf("%d,",tab[i]);
		i++;
	}








	


return (0);
}
