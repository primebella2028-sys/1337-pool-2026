/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:04:25 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/06 18:21:20 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{

	int 	i;
	int	swap;

	i = 0;
	while (i <= (size -1 ) / 2)
	{
		swap = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = swap;
		i++;
	}
}
#include <stdio.h>
int main()
{

	int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
	int *tab = array;
	int	size;

	size = 0;
	ft_rev_int_tab(tab,18);
	while (size < 18)
	{
		printf("%d,",*tab);
		tab++;
		size++;
	}
	return (0);
}
