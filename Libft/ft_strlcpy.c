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

size_t	ft_strlcpy(char *dst, char *src,
					size_t size)
{
	size_t	j;

	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size > 9223372036854775807)
	{
		size *= -1;
		if (size < ft_strlen(src))
			size = ft_strlen(src) + 1;
	}
	while (j < size - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	if (ft_strlen(dst) <= ft_strlen(src))
		return (ft_strlen(src));
	return (ft_strlen(dst));
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
