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

static int	counter(unsigned int integer)
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

void	putnbr_fd(unsigned int n, int fd)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else
	{
		putnbr_fd(n / 10, fd);
		c = (n % 10) + '0';
		write(fd, &c, 1);
	}
}

int	print_unsigned(unsigned int u_integer)
{
	putnbr_fd(u_integer, 1);
	return (counter(u_integer));
}
