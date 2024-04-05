/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:36:05 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/05 19:36:05 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	ft_tolower(unsigned char c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int main(){
	char cadena[] = "ESTO ES UNA CADENA DE PRUEBA";
	int i = 0;

	while (i < ft_strlen(cadena))
	{
		cadena[i] = ft_tolower(cadena[i]);
		i++;
	}
	printf("\n%s\n\n", cadena);
	
	char cadena1[] = "ESTO ES UNA CADENA DE PRUEBA";

	i = 0;
	while (i < ft_strlen(cadena1))
	{
		cadena1[i] = tolower(cadena1[i]);
		i++;
	}
	printf("\n%s\n\n", cadena1);
	return (0);
}*/