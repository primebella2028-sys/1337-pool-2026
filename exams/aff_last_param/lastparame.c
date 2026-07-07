/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastparame.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 08:36:01 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/07 08:45:50 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = argc - 1;
	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	
	while (argv[j][i])
	{
		write(1, &argv[j][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
