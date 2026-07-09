/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 11:10:56 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/07 11:21:26 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i] ;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

int	main()
{	
	char *bella = "ayoub bella";
	char dest[50];

	

	printf("%s.",ft_strcpy(dest,bella));
	

		return(0);
}
