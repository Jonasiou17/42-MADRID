/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:06:04 by cdorado-          #+#    #+#             */
/*   Updated: 2024/06/05 19:06:04 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	print_integer(int integer);
int	print_string(char *string);
int	print_memory_address(void *ptr);
int	print_character(char c);
int	print_unsigned(unsigned int);
int	print_hex_upper(unsigned long long hex);
int	print_hex_lower(unsigned long long hex);
int	print_percent(void);
int	ft_printf(char const *format, ...);

#endif