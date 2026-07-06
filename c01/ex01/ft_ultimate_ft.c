/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:24:38 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/06 13:40:20 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main()
{
	int	a ;
	int	*p1 = &a;
	int	**p2 = &p1;
	int	***p3 = &p2;
	int 	****p4 = &p3;
	int	*****p5 = &p4;
	int	******p6 = &p5;
	int	*******p7 = &p6;
	int	********p8 = &p7;
	int	*********p9 = &p8;
	
	a = 220;
	printf("%d\n",a);
	ft_ultimate_ft(&p8);
	printf("%d",a);
	return (0);
}
