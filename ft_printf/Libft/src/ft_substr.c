/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:50:45 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/19 18:50:45 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
	La substring empieza desde el índice ’start’ y tiene una longitud 
	máxima ’len’.

	Return value --> La substring resultante.
	NULL si falla la reserva de memoria.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (len > s_len - start + 1)
		len = s_len - start;
	if (start > s_len)
		len = 0;
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL || s == NULL)
		return (NULL);
	if (start > s_len)
	{
		substr[i] = '\0';
		return (substr);
	}
	while (len--)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
/*
int main (){
	char	prueba[] = "lorem ipsum dolor sit amet";
	printf("El sub string resultante es: %s\n\n", 
	ft_substr("hola", 0, ULONG_MAX));
	printf("El valor máximo de un size_t es %lu\n", ULONG_MAX);
	return (0);
}*/