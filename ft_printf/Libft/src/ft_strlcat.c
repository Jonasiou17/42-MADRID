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

/*	The strlcat() function appends the NUL-terminated string src to the 
	end of dst.  It will append at most size - strlen(dst) - 1 bytes, 
	NUL-terminating the result.
	
	Return value --> The strlcpy() and strlcat() functions return 
	the total length of the string they tried to create.  For strlcpy() 
	that means the length of src.  For strlcat() that means the initial 
	length of dst plus the length of src.  While this may seem somewhat 
	confusing, it was done to make truncation detection simple.*/

#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src,
					size_t size)
{
	size_t	j;
	size_t	dst_len;

	j = 0;
	dst_len = ft_strlen(dst);
	if (size > dst_len)
	{
		while (size - dst_len - 1 > 0 && src[j] != '\0')
		{
			dst[dst_len] = src[j];
			dst_len++;
			j++;
		}
		dst[dst_len] = '\0';
		return (ft_strlen(src) + ft_strlen(dst) - j);
	}
	if (src[0] == '\0' || size <= dst_len)
		return (size + ft_strlen(src));
	if (size == 0)
		return (ft_strlen(src));
	return (ft_strlen(dst) + ft_strlen(src));
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