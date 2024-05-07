/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:27:45 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/16 16:27:45 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The  atoi() function converts the initial portion of the string 
	pointed to by nptr to int.  The behavior is the same as

        strtol(nptr, NULL, 10);

    except that atoi() does not detect errors.

    Return value --> The converted value or 0 on error.*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		signo;
	int		resultado;

	i = 0;
	resultado = 0;
	signo = 1;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\v' || nptr[i] == '\r' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-' && nptr[i] != '\0')
	{
		signo = -1;
		i++;
	}
	if (nptr[i] == '+' && signo != -1)
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i] != '\0')
	{
		resultado = resultado * 10 + (nptr[i] - '0');
		i++;
	}
	if (resultado != 0)
		return (resultado * signo);
	return (0);
}
/*
int main ()
{
	char	*numero = "122";

	printf("El valor que retorna ft_atoi es: %d\n", ft_atoi(numero));
	printf("El valor que retorna atoi es: %d\n", atoi(numero));

	return (0);
}*/