/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:44:39 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/06 13:47:58 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 99;
	b = 10;

	ft_div_mod(a,b,&div,&mod);
	printf("a is %d and b is %d" ,a,b);
	printf("the div is  %d\n and the mod is %d" ,div,mod);
	return (0);
}
