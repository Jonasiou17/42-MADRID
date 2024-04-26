/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:45:53 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/21 18:45:53 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Elimina todos los caracteres de la string 'set' desde el principio
	y desde el final de 's1', hasta encontrar un caracter no perteneciente 
	a 'set'. La string resultante se devuelve con una reserva de malloc(3)
	
	Return value --> La string recortada o NULL si falla la reserva de memoria*/

#include "libft.h"

int	check(char const *set, char	c)
{
	int	i;

	i = 0;
	while (set[i++] == c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)	
{
	size_t	i;
	size_t	s1_len;
	char	*strtrim;

	strtrim = 0;
	if (s1 == NULL)
		return (NULL);
	if (s1 != 0 && set != 0)
	{
		i = 0;
		s1_len = ft_strlen(s1);
		while (ft_strchr(set, s1[i]) && s1[i] != '\0')
			i++;
		while (ft_strchr(set, s1[s1_len - 1]) && s1[s1_len - 1] != '\0')
			s1_len--;
		if (s1_len < i)
			s1_len = i;
		strtrim = (char *)malloc(s1_len - i + 1);
		if (strtrim)
			ft_strlcpy(strtrim, (char *)&s1[i], s1_len - i + 1);
	}
	return (strtrim);
}
/*
int main(){
	char	*s1 = "abcde";
	char 	*set = "ae";

	printf("El valor retornado por ft_strtrim es: %s\n", ft_strtrim(s1, set));

	return (0);
}*/