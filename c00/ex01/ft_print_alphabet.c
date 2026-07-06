/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 11:05:15 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/06 11:08:52 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{

	char	c;

	c = 'a';
	while (c < 'z')
	{
		ft_putchar(c);
		c++;
	}
}



int main()
{
	ft_print_alphabet();

	return (0);
}
