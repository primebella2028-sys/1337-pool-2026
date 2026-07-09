/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:32:14 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/09 15:37:47 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!(str[i] >= '0'  && str[i] <= '9'))
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
	char	str[] = "7575848480";
	char 	st[] = "sss3434344";
	char 	s[] = "asdfds";
	char 	sd[] = "";
	


	printf("------------->%d\n",ft_str_is_numeric(str));
	printf("------------->%d\n",ft_str_is_numeric(st));
	printf("------------->%d\n",ft_str_is_numeric(s));
	printf("------------->%d\n",ft_str_is_numeric(sd));

	

	return (1);
}
