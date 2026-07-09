/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:07:32 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/09 15:31:23 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
#include <stdio.h>
int	main()
{
	char src[] = "trgsfdgfdgsfd";
	char str[] = "asdfsadf dfasdf";
	char s[] = "Adsfdsfds";
	char sr[] = "Asdfds88889f9fdsf";
	char sss[] = "";


	printf("the one %d\n", ft_str_is_alpha(src));
	printf("the one %d\n", ft_str_is_alpha(str));
	printf("the one %d\n", ft_str_is_alpha(s));
	printf("the one %d\n", ft_str_is_alpha(sr));
	
	printf("the one %d\n", ft_str_is_alpha(sss));
	return (0);
}
