/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:51:34 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/25 19:19:19 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isascii(unsigned char c)
{
	int	check;

	check = 1;
	if (c > 127)
		check = 0;
	return (check);
}
/*
int main(){
	char prueba = -46;

	printf("\nEl valor que retorna ft_isascii es %d\n\n", ft_isascii(prueba));
	printf("El valor que retorna isascii es %d\n", isascii(prueba));
    printf("El valor de la variable es %d y su representación es %c\n"
	, prueba, prueba);

	return (0);
}*/