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

/*	The strcmp() function compares the two strings s1 and s2.  The locale 
	is not taken into account (for a locale-aware comparison, see strcoll(3)).
	The comparison is done using unsigned characters.

    Strcmp() returns an integer indicating the result of the comparison, 
	as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.

    The strncmp() function is similar, except it compares only the first 
	(at most) n bytes of s1 and s2.
	
	Return value --> The strcmp() and strncmp() functions return an 
	integer less than, equal to, or greater than zero if s1  (or the first 
	n bytes thereof) is found, respectively, to be less than, to match, 
	or be greater than s2.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && i < n
		&& s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (i == n)
		return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(){
	char	str1[] = "Hola amigo mio";
	char	str2[] = "Hola mi amigo";
	int	n = 5;

	printf("\nla funcion ft_strncmp retorna %d\n", ft_strncmp(str1, str2, n));
	printf("\nla funcion strncmp retorna %d\n", strncmp(str1, str2, n));

	return (0);
}*/