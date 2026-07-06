/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 11:00:33 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/06 11:04:24 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int main ()
{
	ft_putchar('A');
	ft_putchar('y');
	ft_putchar('o');
	ft_putchar('u');
	ft_putchar('b');
	ft_putchar('.');
	ft_putchar('b');
	ft_putchar('e');
	ft_putchar('l');
	ft_putchar('l');
	ft_putchar('A');
	ft_putchar('.');

	return (0);

}
