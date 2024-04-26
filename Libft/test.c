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
//#include <bsd/string.h>

int main(void)
{
	char	str1[] = "teste";
	char	str2[] = "teste";
	int	n = 6;

	printf("\nla funcion ft_memcmp retorna %d\n", ft_memcmp(str1, str2, n));
	printf("\nla funcion memcmp retorna %d\n", memcmp(str1, str2, n));

	return (0);
}
