/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:40:18 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/25 19:19:12 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The memset() function fills the first n bytes of the memory area pointed to 
	by s with the constant byte c.
	
	Return value -->  The memset() function returns a pointer to the memory 
	area s.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	i = 0;
	s1 = s;
	while (i < n)
	{
		s1[i] = c;
		i++;
	}
	return (s1);
}
/*
int main(){
	char buffer [21];
	char buffer1 [21];
	char *string;
	char *string1;

	ft_memset(buffer, 0, sizeof(buffer));
	string = (char *)ft_memset(buffer, 'A', 10);
	printf("\nBuffer contents: %s", string);

	ft_memset(buffer + 10, 'B', 10);
	printf("\nBuffer contents: %s", buffer);

	// Función original de C

	memset(buffer1, 0, sizeof(buffer1));
	string1 = (char *)memset(buffer1, 'A', 10);
	printf("\n\nBuffer contents: %s", string1);

	memset(buffer1 + 10, 'B', 10);
	printf("\nBuffer contents: %s\n", buffer1);

	return (0);
}*/