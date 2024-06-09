/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:39:02 by cdorado-          #+#    #+#             */
/*   Updated: 2024/06/06 18:39:02 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	counter(int integer)
{
	int	i;

	i = 0;
	while (integer > 0)
	{
		i++;
		integer /= 10;
	}
	return (i);
}

int	print_unsigned(unsigned int u_integer)
{
	ft_putnbr_fd(u_integer, 1);
	return (counter(u_integer));
}