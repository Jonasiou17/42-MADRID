/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:31:47 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/25 19:19:18 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	int	check;

	check = 1;
	if (c < 48 || c > 57)
		check = 0;
	return (check);
}
/*
int main(){
	char prueba = '9';

	printf("El valor de retorno de ft_isdigit es %d", ft_isdigit(prueba));
	printf("\n\nEl valor de retorno de isdigit es %d", isdigit(prueba));
	return (0);
}*/