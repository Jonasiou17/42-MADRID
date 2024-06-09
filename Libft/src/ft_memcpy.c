/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:01:06 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/25 19:19:15 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The  memcpy()  function copies n bytes from memory area src to 
	memory area dest.  The memory areas must not overlap.  Use memmove(3) 
	if the memory areas do overlap.
	
	Return value --> The memcpy() function returns a pointer to dest.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cdest;
	const char	*csrc;

	i = 0;
	cdest = dest;
	csrc = src;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	#define MAX_LEN 80

	char source[ MAX_LEN ] = "This is the source string";
	char target[ MAX_LEN ] = "This is the target string";

	printf("\nBefore ft_memcpy, target is \"%s\"\n", target );
	ft_memcpy(target, source, sizeof(char) * 16);
	printf("After ft_memcpy, target becomes \"%s\"\n\n", target );

	char source1[ MAX_LEN ] = "This is the source string";
	char target1[ MAX_LEN ] = "This is the target string";

	printf("Before memcpy, target is \"%s\"\n", target1 );
	memcpy(target1, source1, sizeof(char) * 16);
	printf("After memcpy, target becomes \"%s\"\n\n", target1 );

	return (0);
}*/