/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:53:32 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/25 19:21:45 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcpy(char *dest, char *src,
					size_t count)
{
	size_t	j;

	j = 0;
	if (count == 0)
		return (ft_strlen(src));
	if (count > 9223372036854775807)
	{
		count *= -1;
		if (count < ft_strlen(src))
			count = ft_strlen(src) + 1;
	}
	while (j < count - 1)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	if (ft_strlen(dest) <= ft_strlen(src))
		return (ft_strlen(src));
	return (ft_strlen(dest));
}
/*
int main(){
	char buffer [40] = "Hola, ";
	char buffer1 [40] = "que tal";
	char buffer2 [40] = "Hola, ";
	size_t 	aux;
	size_t	aux1;

	aux = ft_strlcpy(buffer, buffer1, -1);
	printf("\nBuffer ahora con ft_strlcpy contiene %s\n", buffer);
	printf("El valor de ft_strlcpy es %ld\n", aux);

	aux1 = strlcpy(buffer2, buffer1, -1);
	printf("\nBuffer2 ahora con strlcpy contiene %s\n", buffer2);
	printf("El valor de strlcpy es %ld\n", aux1);

	return (0);
}*/
