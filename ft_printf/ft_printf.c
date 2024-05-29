/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 11:25:35 by cdorado-          #+#    #+#             */
/*   Updated: 2024/05/26 17:04:19 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(char const *format, ...)
{
	va_list pa;
	char	*ptr;
	int		len;

	va_start(pa, format);
	ptr = (char *)format;
	len = ft_strlen(format);
	while(*ptr != '\0')
	{
		if (*ptr != '%')
		{
			ft_putchar_fd(*ptr, 1);
			ptr++;
			continue;
		}
		switch (*++ptr)
		{
			case 'd':
			ft_putnbr_fd(va_arg(pa, int), 1);
			ptr++;
			break;
			case 's':
			ft_putstr_fd(va_arg(pa, char *), 1);
			ptr++;
			break;
		}
	}
	va_end(pa);
	return (len);
}

int main()
{
	int prueba = printf("Hola %s\n", "amigo");
	printf("El valor de retorno de printf es %d\n", prueba);
	int prueba1 = ft_printf("Hola %s\n", "amigo");
	printf("El valor de ft_printf es %d\n", prueba1);
	return (0);
}