/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:18:01 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/11 18:18:01 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*memchr(const void *string, int c, size_t n)
{
	size_t				i;
	//size_t				len;
	const unsigned char	*str;

	i = 0;
	//len = ft_strlen((char *)string);
	str = string;
	while (i < n)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}