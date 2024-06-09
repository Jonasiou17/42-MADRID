# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 18:09:35 by cdorado-          #+#    #+#              #
#    Updated: 2024/03/25 19:16:32 by cdorado-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

#------------------------------------------------#
#                   VARIABLES                    #
#------------------------------------------------#

SRCS        :=	ft_bzero.c      \
				ft_isalpha.c    \
				ft_isdigit.c    \
				ft_memcpy.c     \
				ft_memset.c     \
				ft_strlen.c     \
				ft_isalnum.c    \
				ft_isascii.c    \
				ft_isprint.c    \
				ft_memmove.c    \
				ft_strlcpy.c    \
				ft_strlcat.c    \
				ft_toupper.c    \
				ft_tolower.c    \
				ft_strchr.c     \
				ft_strrchr.c    \
				ft_strncmp.c    \
				ft_memchr.c     \
				ft_memcmp.c     \
				ft_strnstr.c    \
				ft_atoi.c       \
				ft_calloc.c     \
				ft_strdup.c     \
				ft_substr.c     \
				ft_strjoin.c    \
				ft_strtrim.c    \
				ft_split.c      \
				ft_itoa.c       \
				ft_strmapi.c    \
				ft_putchar_fd.c \
				ft_putstr_fd.c  \
				ft_putendl_fd.c \
				ft_putnbr_fd.c  \
				ft_striteri.c

OBJS        := $(SRCS:%.c=%.o)
INCLUDE		:= libft.h # Útil para referirnos a los .h cuando están en otro directorio

CC          := gcc
CFLAGS      := -Wall -Wextra -Werror
CPPFLAGS	:= -I. # --> Para incluir otros directorios. De momento no incluimos nada 
# aquí porque todos los archivos están en la misma ruta.
AR			:= ar
ARFLAGS		:= -r -c -s

#------------------------------------------------#
#                   COMMANDS                     #
#------------------------------------------------#


RM          := rm -f
MAKEFLAGS   += --no-print-directory

#------------------------------------------------#
#                  EXTRA RULES                   #
#------------------------------------------------#
# all       default goal
# $(NAME)   linking .o -> binary
# %.o       compilation .c -> .o
# clean     remove .o
# fclean    remove .o + binary
# re        remake default goal

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(info CREATED $(NAME))

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@
	$(info CREATED $@)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

#------------------------------------------------#
#                SPECIAL TARGETS                 #
#------------------------------------------------#

.PHONY: all clean fclean re 