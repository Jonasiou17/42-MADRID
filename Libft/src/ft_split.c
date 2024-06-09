/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:20:03 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/24 18:20:03 by cdorado-         ###   ########.fr       */
/*                                	                                          */
/* ************************************************************************** */

/*	Reserva (utilizando malloc(3)) un array de strings resultante de separar 
	la string ’s’ en substrings utilizando el caracter ’c’ como delimitador. 
	El array debe terminar con un puntero NULL.

	Return value --> El array de nuevas strings resultante de la separación.
	NULL si falla la reserva de memoria.
*/

#include "libft.h"

static int	num_str(char *s, char c)
{
	int	num_str;
	int	i;

	num_str = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			num_str++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	num_str++;
	return (num_str);
}

static void	*ft_free(char **memry, size_t aux)
{
	size_t	i;

	i = 0;
	while (i < aux)
	{
		free(memry[i]);
		i++;
	}
	free(memry);
	return (NULL);
}

static void	split_str(char **ptr, char *str, char c, int nwords)
{
	int		i;
	char	*aux;

	i = 0;
	if ((nwords > 0) && *str)
	{
		while (i < (nwords - 1))
		{
			aux = ft_strchr(str, c);
			ptr[i++] = ft_substr(str, 0, aux - str);
			if (ptr == 0)
			{
				ft_free(ptr, i);
				return ;
			}
			while (*aux == c)
				aux++;
			str = aux;
		}
		ptr[i++] = ft_strdup(str);
		ptr[i] = 0;
	}
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**ptr;
	char	*str;
	char	a[2];

	a[0] = c;
	a[1] = '\0';
	if (s)
	{
		str = ft_strtrim(s, a);
		if (str)
		{
			nwords = num_str(str, c);
			ptr = ft_calloc((nwords + 1), sizeof(char *));
			if (ptr)
				split_str(ptr, str, c, nwords);
			free(str);
			return (ptr);
		}
	}
	return (NULL);
}
/*
int main()
{
	char	*prueba = "aa a a";
	char	c = ' ';
	char	**resultado = ft_split(prueba, c);
	int		i = 0;

	while (i < 3)
	{
		printf("El string contiene: %s\n", &resultado[i][0]);
		i++;
	}
}
}*/