/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:40:18 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/22 20:04:01 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

void    *ft_memset(void *dest, int c, size_t count)
{
    unsigned char *dest1;

    dest1 = dest;
    while(count > 0)
    {
        dest1[count] = c;  // Si le pones en el prototipo de la función en vez de void unchar si funciona
        count--;
    }
    return (dest);
}
/*
int main(){
    char buffer [21];
    char buffer1 [21];
    char *string;

    ft_memset(buffer, 0, sizeof(buffer));
    string = (char *)ft_memset(buffer, 'A', 10);
    printf("\nBuffer contents: %s", string);

    ft_memset(buffer + 10, 'B', 10);
    printf("\nBuffer contents: %s", buffer);

    // Función original de C

    memset(buffer1, 0, sizeof(buffer1));
    string = (char *)memset(buffer1, 'A', 10);
    printf("\n\nBuffer contents: %s", string);

    memset(buffer1 + 10, 'B', 10);
    printf("\nBuffer contents: %s", buffer1);

    return (0);
}*/