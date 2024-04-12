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

/* 	The  memchr()  function scans the initial n bytes of the memory area 
	pointed to by s for the first instance of c.  Both c and the bytes of 
	the memory area pointed to by s are interpreted as unsigned char.
	
	Return value --> The  memchr()  and  memrchr() functions return a 
					pointer to the matching byte or NULL if the character does
       				not occur in the given memory area.*/

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == c)
			return ((unsigned char *)&str[i]);
		i++;
	}
	return (NULL);
}
