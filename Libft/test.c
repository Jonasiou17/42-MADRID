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

int main(void)
{
	char	prueba[] = "lorem ipsum dolor sit amet";
	char	*copia;
	char	*copia1;

	copia = ft_strdup(prueba);
	printf("El string copiado contiene: %s\n", copia);

	copia1 = strdup(prueba);
	printf("El string copiado contiene: %s\n", copia1);
}

