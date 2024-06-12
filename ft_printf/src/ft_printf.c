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
#include "ft_printf.h"

static int	print_formats(va_list pa, const char format)
{
	int	len;

	len = 0;
	if (format == 'd')
		len += print_integer(va_arg(pa, int));
	else if (format == 's')
		len += print_string(va_arg(pa, char *));
	else if (format == 'p')
		len += print_memory_address(va_arg(pa, void *));
	else if (format == 'c')
		len += print_character(va_arg(pa, int));
	else if (format == 'i')
		len += print_integer(va_arg(pa, int));
	else if (format == 'u')
		len += print_unsigned(va_arg(pa, unsigned int));
	else if (format == 'x')
		len += print_hex_lower(va_arg(pa, unsigned long long));
	else if (format == 'X')
		len += print_hex_upper(va_arg(pa, unsigned long long));
	else if (format == '%')
		len += print_percent();
	return (len);
}

int	ft_printf(char const *format, ...)
{
	va_list	pa;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(pa, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			len += print_character(format[i]);
		else
			len += print_formats(pa, format[++i]);
		i++;
	}
	va_end(pa);
	return (len);
}
