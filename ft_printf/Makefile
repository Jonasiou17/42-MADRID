# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdorado- <cdorado-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 18:43:53 by cdorado-          #+#    #+#              #
#    Updated: 2024/06/06 18:43:53 by cdorado-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		:= libftprintf.a

SRCS		:=	ft_printf.c            \
				print_character.c      \
				print_hex_upper.c      \
				print_hex_lower.c      \
				print_integer.c        \
				print_memory_address.c \
				print_percent.c        \
				print_string.c         \
				print_unsigned.c 

OBJS		:= $(SRCS:%.c=%.o)

INCLUDE		:= libft.h ft_printf.h

CC			:= gcc
CFLAGS		:= -Wall -Werror -Wextra

AR			:= ar
ARFLAGS		:= -rcs

RM			:= rm -f
MAKEFLAGS	:= --no-print-directory

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: 
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re




