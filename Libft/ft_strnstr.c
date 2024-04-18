/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:23:36 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/15 19:23:36 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	The strnstr() function locates the first occurrence of the 
	null-terminated string little in the string big, where not more 
	than len characters are searched.  Characters that appear after 
	a ‘\0’ character are not searched.  Since the strnstr() function 
	is a FreeBSD specific API, it should only be used when portability 
	is not a concern.
	 
	Retun value --> If little is an empty string, big is returned; 
	if little occurs nowhere in big, NULL is returned; otherwise a
    pointer to the first character of the first occurrence of 
	little is returned.*/

#include "libft.h"
//#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	/*if (len > 9223372036854775807)
		len *= -1;*/
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && j < little_len)
		{
			j++;
			if (i + j <= len && j == little_len)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main(){
	char	seeked[40] = "Hola q";
	char	seek[40] = "q\0";
	size_t	len = 10;

	printf("\nEl valor que retorna ft_strnstr es: %s\n", ft_strnstr(seeked, seek, len));
	printf("El valor que retorna strnstr es: %s\n\n", strnstr(seeked, seek, len));

	return (0);
}*/