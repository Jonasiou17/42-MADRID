/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:33:48 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/13 20:10:56 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(char c)
{
	int check;

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