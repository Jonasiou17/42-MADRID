/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:10:45 by cdorado-          #+#    #+#             */
/*   Updated: 2024/04/26 18:58:52 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The  calloc()  function  allocates  memory  for an array of nmemb elements 
	of size bytes each and returns a pointer to the allocated memory.  
	The memory is set to zero.  If nmemb or size is 0, then calloc()  
	returns either NULL, or a unique pointer value that can later be 
	successfully passed to free().  If the multiplication of nmemb and size 
	would result in integer overflow, then calloc() returns an error.  
	By  contrast,  an integer  overflow  would  not be detected in the 
	following call to malloc(), with the result that an incorrectly sized 
	block of memory would be allocated:

        malloc(nmemb * size);
		
	Return value --> The malloc() and calloc() functions return a pointer 
	to the allocated memory, which is suitably aligned for any built-in 
	type.  On error, these functions return NULL.  NULL may also be 
	returned by a successful call to malloc() with a size of zero, 
	or by a successful call to calloc() with nmemb or size equal to zero.*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	if ((nmemb != 0) && nmemb * size < 9223372036854775807)
	{
		ptr = (void *)malloc(sizeof(size) * nmemb);
		ft_memset(ptr, 0, nmemb * size);
		return (ptr);
	}
	return (NULL);
}
/*
int main(void)
{º
	char	*ptr;

	ptr = (char *)ft_calloc (15, 4);
	printf("Con ft_calloc, el contenido del ptr es %s 
	y su dirección de memoria es %p\n", ptr, ptr);

	ptr = (char *)calloc (15, 4);
	printf("Con calloc, el contenido del ptr es %s 
	y su dirección de memoria es %p\n", ptr, ptr);

	return (0);
}*/