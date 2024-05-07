/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:25:44 by cdorado-          #+#    #+#             */
/*   Updated: 2024/05/06 19:25:44 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	int		len;

	i = 0;
	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
/*
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
}*/
