/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:47:47 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/21 16:47:47 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Reserva con malloc(3) y devuelve una nueva string, formada por la 
	concatenación de s1 y s2 sobre el string s1*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t		i;
	char	*strjoin;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	strjoin = malloc(s1_len + s2_len + 1);
	if (strjoin == NULL)
		return (NULL);
	ft_memset(strjoin, 0, s1_len + s2_len + 1);
	ft_memcpy(strjoin, s1, s1_len);
	while(s2[i] != '\0')
	{
		strjoin[s1_len + i] = (char)s2[i];
		i++;
	}
	return (strjoin);
}
/*
int main (){
	char *prueba = "Hola buenas tardes, ";
	char *prueba1 = "amigo mio";

	printf("El string contiene: %s\n", ft_strjoin(prueba, prueba1));
	printf("El valor de la direccion de memoria de prueba es %p\n", prueba);
	printf("El valor de la direccion de memoria de prueba1 es %p\n", prueba1);
	printf("El valor de la direccion de memoria de strjoin es %p\n", 
	ft_strjoin(prueba, prueba1));
}*/