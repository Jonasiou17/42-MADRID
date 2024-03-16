/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:20:21 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/16 19:20:21 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i]) 
        i++;
    return (i);
}
/*
int main()
{
    char c[] = "M";
    printf("El string tiene %d caracteres", ft_strlen(c));
    return (0);
}*/