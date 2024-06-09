/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:45:10 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/05 19:45:10 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	The strchr() function returns a pointer to the first occurrence of the 
	character c in the string s.
	
	Return value --> The strchr() and strrchr() functions return a pointer 
	to the matched character or NULL if the character  is not  found.  
	The terminating null byte is considered part of the string, so that 
	if c is specified as '\0', these functions return a pointer to the 
	terminator.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c < 0)
		return ((char *)s);
	return (NULL);
}
/*
int main(void)
{
  	char buffer1[40] = "teste";
 	char *ptr;
  	int   ch = 'e';
	
	printf("La dirección de memoria del array es %p\n", buffer1);
 	ptr = ft_strchr( buffer1, ch );
 	printf( "The first occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );
	printf("La direccion de memoria devuelta tras buscar es %p\n", ptr);
 
}*/