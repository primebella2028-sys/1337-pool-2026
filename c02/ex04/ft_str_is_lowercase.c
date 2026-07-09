/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:38:47 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/09 15:44:30 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
#include <stdio.h>

int	main(void)
{
	char	str[] = "ayoubbella";
	char	st[] = "ay oubbella";
	char	s[] = "ayAbbella";
	char	r[] = "ayo3ubbella";
	char	tr[] = "";
	

	printf(" ---------------->   %d\n",ft_str_is_lowercase(str));
	printf(" ---------------->   %d\n",ft_str_is_lowercase(st));
	printf(" ---------------->   %d\n",ft_str_is_lowercase(s));
	printf(" ---------------->   %d\n",ft_str_is_lowercase(r));
	printf(" ---------------->   %d\n",ft_str_is_lowercase(tr));

	return (0);
}
