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

void	ft_putstr( unsigned int i, char *c)
{
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
}

int main()
{
	char *p = "Hello World!";
	ft_striteri(p, &ft_putstr);
	printf("%s", p);
}