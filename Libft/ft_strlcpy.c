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

/*	The strlcpy() and strlcat() functions copy and concatenate strings 
	respectively.  They are designed to be safer, more consistent, 
	and less error prone replacements for strncpy(3) and strncat(3).  
	Unlike those functions, strlcpy() and strlcat() take the full size 
	of the buffer (not just the length) and guarantee to NUL-terminate 
	the result (as long as size is larger than 0 or, in the case of strlcat(), 
	as long as there is at least one byte free in dst).  Note that a byte 
	for the NUL should be included in size.  Also note that strlcpy() 
	and strlcat() only operate on true “C” strings.  This means that for 
	strlcpy() src must be NUL-terminated and for strlcat() both src 
	and dst must be NUL-terminated.
	
	The strlcpy() function copies up to size - 1 characters from the 
	NUL-terminated string src to dst, NUL-termi‐nating the result.

    The strlcat() function appends the NUL-terminated string src to the 
	end of dst.  It will append at most size- strlen(dst) - 1 bytes, 
	NUL-terminating the result.

	Return value --> The strlcpy() and strlcat() functions return 
	the total length of the string they tried to create.  Forstrlcpy() 
	that means the length of src.  For strlcat() that means the initial 
	length of dst plus the lengthof src.  While this may seem somewhat 
	confusing, it was done to make truncation detection simple.

     Note, however, that if strlcat() traverses size characters without 
	 finding a NUL, the length of the string isconsidered to be size 
	 and the destination string will not be NUL-terminated (since there 
	 was no space for theNUL).  This keeps strlcat() from running off 
	 the end of a string.  In practice this should not happen (as 
	 itmeans that either size is incorrect or that dst is not a 
	 proper “C” string).  The check exists to prevent po‐tential 
	 security problems in incorrect code.
	
	*/

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
	while (j < size - 1 && src[j] != '\0')
	{
		dst[j] = (unsigned char)src[j];
		j++;
	}
	dst[j] = '\0';
	if (ft_strlen(dst) <= ft_strlen(src))
		return (ft_strlen(src));
	return (ft_strlen(dst));
}
/*
int main(){
	char buffer[16];
	char buffer2[16];
	size_t 	aux;
	size_t	aux1;

	memset(buffer, 0, 15);
	memset(buffer2, 0, 15);
	memset(buffer, 'r', 6);
	memset(buffer2, 'r', 6);

	printf("\nBuffer antes con ft_strlcpy contiene %s\n", buffer);
	aux = ft_strlcpy(buffer, "", 15);
	printf("\nBuffer ahora con ft_strlcpy contiene %s\n", buffer + 1);
	printf("El valor de ft_strlcpy es %ld\n", aux);

	printf("\nBuffer antes con strlcpy contiene %s\n", buffer2);
	aux1 = strlcpy(buffer2, "", 15);
	printf("\nBuffer2 ahora con strlcpy contiene %s\n", buffer2 + 1);
	printf("El valor de strlcpy es %ld\n", aux1);

	return (0);

	return (0);
}*/
