/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:15:47 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/11 18:15:47 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	strncmp(const char *str1, const char *str2, size_t num)
{
	str1 = "Hola";
	num = 10;
	str2 = "adios";

	str1 = str2;
	str2 = str1;

	num += 10;

	return (num);
}