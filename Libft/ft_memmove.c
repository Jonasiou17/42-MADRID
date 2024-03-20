/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:18:59 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/20 19:18:59 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t count)
{
    size_t  i;
    char    *cdest;
    char    *csrc;

    i = 0;
    cdest = dest;
    csrc = src;
    while(i < count)
    {
        cdest[i] = csrc[i];
        i++;
    }
    return(cdest);
}

int main( void )
{
    #define SIZE    21
 
    char target[SIZE] = "a shiny white sphere";
    char *p = target + 8;  /* p points at the starting character
                          of the word we want to replace */
     char *source = target + 2; /* start of "shiny" */
 
     printf( "Before memmove, target is \"%s\"\n", target );
     memmove( p, source, 5 );
     printf( "After memmove, target becomes \"%s\"\n", target );

  return (0);
}