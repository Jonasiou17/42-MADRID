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
# include <ctype.h>

void			ft_bzero(void *s, size_t n);
int				ft_isalnum(char c);
int				ft_isalpha(char c);
int				ft_isascii(unsigned char c);
int				ft_isdigit(char c);
int				ft_isprint(unsigned char c);
void			*ft_memcpy(void *dest, const void *src, size_t count);
void			*ft_memmove(void *dest, const void *src, size_t count);
void			*ft_memset(void *dest, int c, size_t count);
size_t			ft_strlcpy(char *dest, char *src,
					size_t count);
size_t			ft_strlcat(char *dest, char *src,
					size_t count);
size_t			ft_strlen(const char *str);
unsigned char	ft_toupper(unsigned char c);
unsigned char	ft_tolower(unsigned char c);
char			*ft_strchr(const char *string, int c);
char			*ft_strrchr(const char *string, int c);
int				strncmp(const char *str1, const char *str2, size_t num);
void			*memchr(const void *s, int c, size_t n);

#endif