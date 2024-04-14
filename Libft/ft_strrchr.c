/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:46:28 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/10 20:46:28 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	The strrchr() function returns a pointer to the last occurrence 
	of the character c in the string s.
	
	Return value -->  The strchr() and strrchr() functions return a 
	pointer to the matched character or NULL if the character  isnot  
	found.  The terminating null byte is considered part of the string, 
	so that if c is specified as '\0', these functions return a pointer 
	to the terminator.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = len;
	if (c > 256)
		c %= 256;
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	if (c < 0)
		return ((char *)s);
	return (NULL);
}
/*
int main(void)
{
  char buffer1[40] = "computer program";
  char * ptr;
  int    ch = 'p';
 
  ptr = ft_strchr( buffer1, ch );
  printf( "The last occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );
 
}*/