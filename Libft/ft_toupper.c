/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:37:34 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/05 18:37:34 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	ft_toupper(unsigned char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int main(){
	char cadena[] = "esto es una cadena de prueba";
	int i;

	while (i < ft_strlen(cadena))
	{
		cadena[i] = ft_toupper(cadena[i]);
		i++;
	}
	printf("\n%s\n\n", cadena);
	
	char cadena1[] = "esto es una cadena de prueba";

	i = 0;
	while (i < ft_strlen(cadena1))
	{
		cadena1[i] = toupper(cadena1[i]);
		i++;
	}
	printf("\n%s\n\n", cadena1);
	return (0);
}*/