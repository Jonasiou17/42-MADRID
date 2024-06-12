/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:19:14 by cdorado-          #+#    #+#             */
/*   Updated: 2024/06/05 19:19:14 by cdorado-         ###   ########.fr       */
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

int	print_integer(int integer)
{
	ft_putnbr_fd(integer, 1);
	return (counter(integer));
}
