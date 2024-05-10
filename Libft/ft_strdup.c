/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:20:40 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/19 18:20:40 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The  strdup()  function returns a pointer to a new string which is a 
	duplicate of the string s.  Memory for the new string is obtained 
	with malloc(3), and can be freed with free(3).

	Return value -->  On success, the strdup() function returns a pointer 
	to the duplicated string.  It returns NULL if  insufficient memory 
	was available, with errno set to indicate the cause of the error.*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*strcpy;

	strcpy = malloc(ft_strlen(s) + 1);
	if (!strcpy)
		return (NULL);
	ft_memset(strcpy, 0, ft_strlen(s) + 1);
	ft_memcpy(strcpy, s, ft_strlen(s));
	return (strcpy);
}
/*
int main (){

	char	prueba[] = "lorem ipsum dolor sit amet";
	char	*copia;
	char	*copia1;

	copia = ft_strdup(prueba);
	printf("El string copiado contiene: %s\n", copia);

	copia1 = strdup(prueba);
	printf("El string copiado contiene: %s\n", copia1);

}*/