/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:45:10 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/05 19:45:10 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(string);
	while (i <= len)
	{
		if (string[i] == c)
			return ((char *)&string[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
  char buffer1[40] = "computer program";
  char * ptr;
  int    ch = 'p';
 
  ptr = ft_strchr( buffer1, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );
 
}*/