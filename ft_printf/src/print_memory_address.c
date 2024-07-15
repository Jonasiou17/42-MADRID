/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory_address.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:35:49 by cdorado-          #+#    #+#             */
/*   Updated: 2024/07/15 18:20:43 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	print_memory_address(void *ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
		return(print_string("(nil)"));
	len += print_string("0x");
	len += print_hex_lower((unsigned long long)ptr);
	return (len);
}
