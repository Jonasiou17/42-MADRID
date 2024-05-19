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
#include <bsd/string.h>

int main(){
	char *buffer = NULL;
	char *buffer2 = NULL;
	size_t 	aux;
	size_t	aux1;

	/*printf("\nBuffer antes con ft_strlcpy contiene %s\n", buffer);
	aux = ft_strlcpy(buffer, "", 92233720368547);
	printf("\nBuffer ahora con ft_strlcpy contiene %s\n", buffer + 1);
	printf("El valor de ft_strlcpy es %ld\n", aux);*/

	printf("\nBuffer antes con strlcpy contiene %s\n", buffer2);
	aux1 = strlcpy(buffer2, "", 92233720368547);
	printf("\nBuffer2 ahora con strlcpy contiene %s\n", buffer2 + 1);
	printf("El valor de strlcpy es %ld\n", aux1);

	return (0);

	return (0);
}