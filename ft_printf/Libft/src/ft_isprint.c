/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:05:48 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/25 19:19:16 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Checks for any printable character including space.

	Return value --> The values returned are nonzero if the 
					character c falls into the tested class, 
					and zero if not.*/

#include "libft.h"

int	ft_isprint(int c)
{
	int	check;

	check = 1;
	if ((c < 32 || c > 126))
		check = 0;
	return (check);
}
/*
int main(){
	char prueba = '\f';

	printf("\nEl valor que retorna ft_isascii es %d\n\n", ft_isascii(prueba));
	printf("El valor que retorna isascii es %d\n\n", isascii(prueba));

	return (0);
}*/