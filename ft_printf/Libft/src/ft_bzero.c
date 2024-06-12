/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:34:32 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/25 19:19:23 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The bzero() function erases the data in the n bytes of the memory 
	starting at the location pointed to by s, by writing zeros (bytes 
	containing '\0') to that area.
	
	Return value --> none*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
int main(){
	char caracter[] = "Hola pepepepepep";

	printf("El estring ahora contiene %s", ft_bzero(caracter, 1) + 1);

	return (0);
}*/