/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:58:16 by cdorado-          #+#    #+#             */
/*   Updated: 2024/06/05 18:58:16 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "include/ft_printf.h"

int main()
{
	//PRUEBA DE ENTEROS
	printf("----------PRUEBA DE ENTEROS----------\n");
	int 	x = 0;

	int prueba = printf("El valor del entero es %d\n", x);
	printf("El valor de retorno de printf es %d\n\n", prueba);

	int prueba1 = ft_printf("El valor del entero es %d\n", x);
	printf("El valor de retorno ft_printf es %d\n\n", prueba1);

	//PRUEBA DE STRINGS
	printf("----------PRUEBA DE STRINGS----------\n");
	char	string[] = "amigo mio";

	int prueba2 = printf("El valor de string es: %s\n", NULL);
	printf("El valor de retorno de printf es %d\n\n", prueba2);

	int prueba3 = ft_printf("El valor de string es: %s\n", NULL);
	printf("El valor de retorno ft_printf es %d\n\n", prueba3);

	//PRUEBA HEXADECIMAL UPPERCASE
	printf("----------PRUEBA DE HEXADECIMAL MAYUS----------\n");
	unsigned int z = 0;

	int prueba4 = printf("El valor de %d en hexadecimal es %X\n", z, z);
	printf("El valor de retorno de printf es %d\n\n", prueba4);
	
	int prueba5 = ft_printf("El valor de %d en hexadecimal es %X\n", z, z);
	printf("El valor de retorno ft_printf es %d\n\n", prueba5);

	//PRUEBA HEXADECIMAL LOWERCASE
	printf("----------PRUEBA DE HEXADECIMAL MINUS----------\n");
	int prueba6 = printf("El valor de %d en hexadecimal es %x\n", z, z);
	printf("El valor de retorno de printf es %d\n\n", prueba6);
	
	int prueba7 = ft_printf("El valor de %d en hexadecimal es %x\n", z, z);
	printf("El valor de retorno ft_printf es %d\n\n", prueba7);

	//PRUEBA MEMMORY ADDRESS
	printf("----------PRUEBA DE DIRECCIONES DE MEMORIA----------\n");
	char c;

	int prueba8 = printf("La direccion de memoria es %p\n",NULL);
	printf("El valor de retorno de printf es %d\n\n", prueba8);

	int prueba9 = ft_printf("La direccion de memoria es %p\n", NULL);
	printf("El valor de retorno de ft_printf es %d\n\n", prueba9);
	
	//PRUEBA SIMBOLO %
	printf("----------PRUEBA DE SIMBOLO %%----------\n");

	int prueba10 = printf("%%\n");
	printf("El valor de retorno de printf es %d\n\n", prueba10);

	int prueba11 = ft_printf("%%\n");
	printf("El valor de retorno de ft_printf es %d\n\n", prueba11);

	//PRUEBA DE UNSIGNED
	printf("----------PRUEBA DE UNSIGNED----------\n");
	unsigned int 	a = 2147483900;

	int prueba12 = printf("El valor del unsigned es %u\n", a);
	printf("El valor de retorno de printf es %u\n\n", prueba12);

	int prueba13 = ft_printf("El valor del unsigned es %u\n", a);
	printf("El valor de retorno ft_printf es %u\n\n", prueba13);

}