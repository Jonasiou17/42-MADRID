/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:18:59 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/25 19:19:13 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	The memmove() function copies n bytes from memory area src to memory 
	area dest.  The memory areas may over‐lap: copying takes place as though 
	the bytes in src are first copied into a temporary array that  does  not
    overlap src or dest, and the bytes are then copied from the temporary 
	array to dest.
	
	Return value --> The memmove() function returns a pointer to dest.*/

#include "libft.h"

void	bucle(char *cdest, const char *csrc, size_t n)
{
	while (n > 0)
	{
		cdest[n - 1] = csrc[n - 1];
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cdest;
	const char	*csrc;

	i = 0;
	cdest = dest;
	csrc = src;
	if (cdest == csrc)
		return (dest);
	if (csrc < cdest && cdest < csrc + n)
	{
		bucle(cdest, csrc, n);
	}
	else
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (cdest);
}
/*
int main(void)
{
	#define MAX_LEN 80

	char source[ MAX_LEN ] = "a shiny white sphere";

	printf("\nBefore ft_memcpy, target is \"%s\"\n", source );
	ft_memmove(source + 8, source + 2, sizeof(char) * 10);
	printf("After ft_memcpy, target becomes \"%s\"\n\n", source );

	char source1[ MAX_LEN ] = "a shiny white sphere";

	printf("Before memcpy, target is \"%s\"\n", source1 );
	memmove(source1 + 8, source1 + 2, sizeof(char) * 10);
	printf("After memcpy, target becomes \"%s\"\n\n", source1 );

	return (0);
}*/