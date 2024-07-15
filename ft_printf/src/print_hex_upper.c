/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:39:42 by cdorado-          #+#    #+#             */
/*   Updated: 2024/06/06 18:39:42 by cdorado-         ###   ########.fr       */
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

int	print_hex_upper(unsigned long long hex)
{
	char	resultado[30];
	int		resto;
	int		i;

	if (hex == 0)
	{
		ft_putstr_fd("0\n", 1);
		return (2);
	}
	i = counter(hex);
	resultado[i--] = '\0';
	while (hex > 0)
	{
		resto = hex % 16;
		if (resto <= 9 && resto >= 0)
			resultado[i--] = resto + '0';
		if (resto >= 10 && resto <= 16)
			resultado[i--] = resto - 10 + 'A';
		hex /= 16;
	}
	resultado[i] = '\0';
	ft_putstr_fd(resultado, 1);
	return (ft_strlen(resultado));
}
