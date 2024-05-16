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

int main(void)
{
	#define MAX_LEN 80

	char source[MAX_LEN] = "hola maquina";
	char target[MAX_LEN] = "Hola brouuuuuuuuuuuu";

	printf("\nBefore ft_memcpy, target is \"%s\"\n", target );
	ft_memcpy(target, source, sizeof(char) * 6);
	printf("After ft_memcpy, target becomes \"%s\"\n\n", target );

	char source1[MAX_LEN] = "hola maquina";
	char target1[MAX_LEN] = "Hola brouuuuuuuuuuuu";

	printf("Before memcpy, target is \"%s\"\n", target1 );
	memcpy(target1, source1, sizeof(char) * 6);
	printf("After memcpy, target becomes \"%s\"\n\n", target1 );

	return (0);
}