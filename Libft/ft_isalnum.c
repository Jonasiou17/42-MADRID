/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:45:57 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/15 17:51:12 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalnum(char c)
{
    int check;

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