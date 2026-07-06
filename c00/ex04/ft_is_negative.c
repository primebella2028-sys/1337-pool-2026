/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 11:24:44 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/06 11:31:56 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if(n < 0)
	{
		write(1, "N", 1);
	}
	else if (n >= 0)
	{		
		write(1, "P", 1);
	}
}


int	main()
{
	ft_is_negative(3);
	ft_is_negative(339);
	ft_is_negative(-1);
	ft_is_negative(-1111);
	ft_is_negative(0);
	ft_is_negative(99999);
	return (0);
}
