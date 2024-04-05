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

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src,
					size_t count)
{
	size_t	j;

	j = 0;
	while (j < count)
	{
		src[j] = dest[j];
		j++;
	}
	if (ft_strlen(dest) <= ft_strlen(src))
		return (ft_strlen(src));
	else
		return (ft_strlen(dest));
}
/*
int main(){
	char buffer [21] = "Hola, ";
	char buffer1 [21] = "que tal";
	char buffer2 [21] = "Hola, ";
	size_t aux;
	char	*aux1;

	aux = ft_strlcpy(buffer, buffer1, 3);
	printf("\nBuffer ahora con strlcpy contiene %s\n", buffer);
	printf("El valor de strlcpy es %ld\n", aux);

	aux1 = strcpy(buffer2, buffer1);
	printf("\nBuffer ahora con strcpy contiene %s\n", buffer2);

	return (0);
}*/
