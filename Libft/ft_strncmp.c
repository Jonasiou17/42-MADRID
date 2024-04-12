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

#include <libft.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	s1 = "Hola";
	n = 10;
	s2 = "adios";

	s1 = s2;
	s2 = s1;

	n += 10;

	return (n);
}