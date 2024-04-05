/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:36:16 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/05 18:36:16 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src,
					size_t count)
{
	size_t	j;
	size_t	dest_len;

	j = 0;
	dest_len = ft_strlen(dest);
	while (count - dest_len > 0)
	{
		dest[dest_len] = src[j];
		dest_len++;
		j++;
	}
	dest[dest_len] = '\0';
	return (ft_strlen(src) + ft_strlen(dest) - j);
}
/*
int main(){
	int main(){
	char buffer [21] = "Hola, ";
	char buffer1 [] = "que tal";
	char buffer2 [21] = "Hola, ";
	size_t aux;
	char *aux1;

	aux = ft_strlcat(buffer, buffer1, 8);
	printf("\nBuffer ahora con strlcat contiene %s\n", buffer);
	printf("El valor de strlcat es %ld\n", aux);

	aux1 = strcat(buffer2, buffer1);
	printf("\nBuffer ahora con strcat contiene %s\n", aux1);

	return (0);
}*/

