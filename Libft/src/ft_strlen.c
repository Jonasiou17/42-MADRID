/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:20:21 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/25 19:19:08 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The  strlen()  function calculates the length of the string pointed 
	to by s, excluding the terminating null byte ('\0').
	
	Return value --> The strlen() function returns the number of bytes in 
	the string pointed to by s.*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int main()
{
	char c[] = "M";
	printf("El sing tiene %d caracteres", ft_slen(c));
	return (0);
}*/