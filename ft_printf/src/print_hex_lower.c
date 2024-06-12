/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:29:53 by cdorado-          #+#    #+#             */
/*   Updated: 2024/06/07 19:29:53 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	counter(unsigned long long integer)
{
	int	i;

	i = 0;
	while (integer > 0)
	{
		i++;
		integer /= 16;
	}
	return (i);
}

int	print_hex_lower(unsigned long long hex)
{
	char	resultado[50];
	int		resto;
	int		i;

	i = counter(hex);
	resultado[i--] = '\0';
	while (hex > 0)
	{
		resto = hex % 16;
		if (resto <= 9 && resto >= 0)
			resultado[i--] = resto + '0';
		if (resto >= 10 && resto <= 16)
			resultado[i--] = resto - 10 + 'a';
		hex /= 16;
	}
	resultado[i] = '\0';
	ft_putstr_fd(resultado, 1);
	return (ft_strlen(resultado));
}
