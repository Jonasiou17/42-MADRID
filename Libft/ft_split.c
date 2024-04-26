/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:20:03 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/24 18:20:03 by cdorado-         ###   ########.fr       */
/*                                	                                            */
/* ************************************************************************** */

/*	Reserva (utilizando malloc(3)) un array de strings resultante de separar 
	la string ’s’ en substrings utilizando el caracter ’c’ como delimitador. 
	El array debe terminar con un puntero NULL.

	Return value --> El array de nuevas strings resultante de la separación.
	NULL si falla la reserva de memoria.
*/

#include "libft.h"

int	count(char *s, char c)
{
	int	contador;
	int	i;

	contador = 0;
	i = 0;
	while (s[i++] != '\0')
	{
		if (s[i] == c)
			contador++;
	}
	return (contador);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		number_of_characters;
	int		i;
	int		k;

	i = 0;
	k = 0;
	split = (char **) malloc(sizeof(char *) * (count((char *)s, c) + 1));
	if(!split)
		return (NULL);
	while (s[i] != '\0')
	{
		number_of_characters = 0;
		while (s[i++] != c)
			number_of_characters++;
		number_of_characters++;
		printf("Ha contado %d palabras\n", number_of_characters);
		split[k] = (char *) malloc(sizeof(char) * (number_of_characters));
		split[k][number_of_characters] = '\0';
		while(number_of_characters > 0)
		{
			split[k][number_of_characters - 1] = s[number_of_characters - 1];
			number_of_characters--;
		}
		printf("%s\n", split[k]);
		k++;
		i = i + 2;
	}
	split[k] = NULL;
	return (split);
}
/*
int main()
{
	char	*prueba = "Hola que tal amigo mio a";
	int		i = 4;

	while (i > 0)
	{
		printf("El primer string es: %s\0", split(prueba, 'a'));
		i--;
	}
	return (0);
}*/