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

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t		i;
	char		*cdest;
	const char	*csrc;

	i = 0;
	cdest = dest;
	csrc = src;
	if (cdest == csrc)
		return (dest);
	if (csrc < cdest && cdest < csrc + count)
	{
		i = count;
		while (i > 0)
		{
			cdest[i - 1] = csrc[i - 1];
			i--;
		}
	}
	else
	{
		while(i < count)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return(cdest);
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