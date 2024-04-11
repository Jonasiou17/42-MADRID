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

#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcat(char *dest, char *src,
					size_t count)
{
	size_t	j;
	size_t	dest_len;

	j = 0;
	dest_len = ft_strlen(dest);
	if (count > dest_len)
	{
		while (count - dest_len - 1 > 0 && src[j] != '\0')
		{
			dest[dest_len] = src[j];
			dest_len++;
			j++;
		}
		dest[dest_len] = '\0';
		return (ft_strlen(src) + ft_strlen(dest) - j);
	}
	if (src[0] == '\0' || count <= dest_len)
		return (count + ft_strlen(src));
	if (count == 0)
		return (ft_strlen(src));
	return (ft_strlen(dest) + ft_strlen(src));
}
/*
int main(){
	char buffer [40] = "lorem ipsum dolor sit amet";
	char buffer1 [] = "a";
	char buffer2 [40] = "lorem ipsum dolor sit amet";
	size_t aux;
	size_t aux1;

	aux = ft_strlcat(buffer, buffer1, 1);
	printf("\nBuffer ahora con ft_strlcat contiene %s\n", buffer);
	printf("El valor de ft_strlcat es %ld\n", aux);

	aux1 = strlcat(buffer2, buffer1, 1);
	printf("\nBuffer ahora con strlcat contiene %s\n", buffer2);
	printf("El valor de strlcat es %ld\n", aux1);
	return (0);
}*/