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
	if (c > 256)
		c %= 256;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main(){
	int str[7] = {-49, 49, 1, -1, 0, -2, 2};
	int c = -2;
	int n = 7;

	printf("La direcion de memoria antes es %p\n", str);
	printf("\nla funcion ft_memchr retorna %p\n", ft_memchr(str, c, n));
	printf("\nla funcion memchr retorna %p\n", memchr(str, c, n));
}*/
