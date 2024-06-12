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

/*These functions convert lowercase letters to uppercase, and vice versa.

    If  c is a lowercase letter, toupper() returns its uppercase equivalent, 
	if an uppercase representation exists in the current locale.  
	Otherwise, it returns c.  The toupper_l() function performs the same 
	task, but uses the locale referred to by the locale handle locale.

    If  c is an uppercase letter, tolower() returns its lowercase equivalent, 
	if a lowercase representation exists in the current locale.  
	Otherwise, it returns c.  

	If c is neither an unsigned char value nor EOF, the behavior of these 
	functions is undefined.
	
	Return value --> The value returned is that of the converted letter, 
	or c if the conversion was not possible.*/

#include "libft.h"

int	ft_toupper(int c)
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