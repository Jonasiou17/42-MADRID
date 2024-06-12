/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:32:49 by cdorado-          #+#    #+#             */
/*   Updated: 2024/05/01 11:32:49 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Utilizando malloc(3), genera una string que represente el valor entero
	recibido como como argumento. Los número negativos deben de gestionarse
	
	Return value --> La string que represente le número. NULL si falla la
	memoria.*/

#include "libft.h"

static int	check_negative(int numero)
{
	if (numero < 0)
		return (numero * -1);
	return (numero);
}

static int	ft_size(int numero)
{
	int	len;

	numero = check_negative(numero);
	len = 0;
	while (numero > 0)
	{
		numero /= 10;
		len++;
	}
	return (len);
}

static void	exec(char *numero, int len, int n)
{
	if (n < 0)
	{
		numero[0] = '-';
		n *= -1;
	}
	while (len > 0)
	{
		numero[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	if (n > 0)
		numero[0] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	int		len;
	char	*numero;

	len = ft_size(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		numero = ft_calloc(len + 2, sizeof(char));
	else
	{
		numero = ft_calloc(len + 1, sizeof(char));
		len--;
	}
	if (numero)
	{
		exec(numero, len, n);
		return (numero);
	}
	return (NULL);
}
/*
int main()
{
	int	numeros[5] = {-9, -120, 2147483647, -10, 0};
	int i = 0;

	while (i < 5)
	{
		printf("%s\n", ft_itoa(numeros[i]));
		i++;
	}
	return (0);
}*/