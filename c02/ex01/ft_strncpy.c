/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aybella <prime.bella.2028@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:57:42 by Aybella           #+#    #+#             */
/*   Updated: 2026/07/09 15:05:31 by Aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i]  = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main()
{
	char src[] = "Ayoub bella is good";
	char dest[20];
	printf("the dest is %s\n",dest);
	ft_strncpy(dest,src,5);
	printf("the dest is %s \n",dest);
	ft_strncpy(dest,src,10);
	printf("the dest is %s\n",dest);
	ft_strncpy(dest,src,19);
	printf("the dest is %s\n",dest);
	ft_strncpy(dest,src,2);



	return (0);

	
}
