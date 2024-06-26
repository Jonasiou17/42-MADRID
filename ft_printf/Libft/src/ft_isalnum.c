/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:45:57 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/25 19:19:22 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Checks for an alphanumeric character; it is equivalent to 
	(isalpha(c) || isdigit(c)).
	
	Return value --> The values returned are nonzero if the 
					character c falls into the tested class, 
					and zero if not.*/

#include "libft.h"

int	ft_isalnum(int c)
{
	int	check;

	check = 1;
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z') && (c < 48 || c > 57))
		check = 0;
	return (check);
}
/*
int main(){
	char prueba = 'o';

	printf("El valor de retorno de ft_isalnum es %d", ft_isalnum(prueba));
	printf("\n\nEl valor de retorno de isalnum es %d", isalnum(prueba));
	return (0);
}*/