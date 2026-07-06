/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:41:04 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/06 13:43:49 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main()
{
	int	a;
	int	b;

	a = 200;
	b = 44;
	printf("a is %d\n b is %d\n",a,b);
	ft_swap(&a, &b);
	printf("a is %d\n b is %d\n",a,b);
	return (0);
}

