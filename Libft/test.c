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
	char	*prueba = "Hola que tal amigo mio a";
	char	**returned;
	int		i = 4;

	returned = ft_split(prueba, 'a');
	while (i > 0)
	{
		printf("El primer string es: %s\n", returned[i]);
		i--;
	}
	return (0);
}
