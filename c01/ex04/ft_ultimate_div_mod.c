/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:49:41 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/06 15:33:18 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int *b)
{
	int	swap;
	swap = *a;
	*a = *a / *b;
	*b = swap % *b;

}

int	main()
{
	int	a ;
	int	b;

	a = 10;
	b = 3;

	ft_ultimate_div_mod(&a,&b);
	printf("the div %d\n the mod %d\n", a, b);
	return (0);
}
