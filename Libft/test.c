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

int main()
{
	int str[7] = {-49, 49, 1, -1, 0, -2, 2};
	int c = 1135;
	int n = 7;

	printf("El valor de char c es %c\n", c);
	printf("La direcion de memoria antes es %p\n", str);
	printf("\nla funcion ft_memchr retorna %p\n", ft_memchr(str, c, n));
	printf("\nla funcion memchr retorna %p\n", memchr(str, c, n));

}

