/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:33:15 by cdorado-          #+#    #+#             */
/*   Updated: 2024/03/25 19:22:25 by cdorado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stddef.h>
# include <string.h>

void			ft_bzero(void *s, size_t n);
int				ft_isalnum(char c);
int				ft_isalpha(char c);
int				ft_isascii(unsigned char c);
int				ft_isdigit(char c);
int				ft_isprint(unsigned char c);
void			*ft_memcpy(void *dest, const void *src, size_t count);
void			*ft_memmove(void *dest, const void *src, size_t count);
void			*ft_memset(void *dest, int c, size_t count);
unsigned int	ft_strlcpy(unsigned char *dest, unsigned char *src,
					size_t count);
int				ft_strlen(char *str);

#endif