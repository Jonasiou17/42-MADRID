/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:26:50 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/31 18:26:50 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(){
	char buffer [21] = "Hola, ";
	char buffer1 [] = "que tal";
	char buffer2 [21] = "Hola, ";
	size_t aux;
	char *aux1;

	aux = ft_strlcat(buffer, buffer1, 8);
	printf("\nBuffer ahora con strlcat contiene %s\n", buffer);
	printf("El valor de strlcat es %ld\n", aux);

	aux1 = strcat(buffer2, buffer1);
	printf("\nBuffer ahora con strcat contiene %s\n", aux1);

	return (0);
}