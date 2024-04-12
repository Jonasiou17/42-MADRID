/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:33:48 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/25 19:19:21 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	Checks  for  an alphabetic character; in the standard "C" locale, 
	it is equivalent to (isupper(c) || islower(c)).  In some locales, 
	there may be additional characters for which isalpha()  is  true—let‐ters 
	which are neither uppercase nor lowercase.
	
	Return value --> The values returned are nonzero if the 
					character c falls into the tested class, 
					and zero if not.*/

#include "libft.h"

int	ft_isalpha(int c)
{
	int	check;

	check = 1;
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		check = 0;
	return (check);
}
/*
int main(){
	char prueba = 'A';

	printf("El valor que retorna ft_isalpha es %d\n\n", ft_isalpha(prueba));
	printf("El valor que retorna isalpha es %d", isalpha(prueba));
	return (0);
}*/