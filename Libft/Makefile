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

SRC	        :=	ft_bzero      \
				ft_isalpha    \
				ft_isdigit    \
				ft_memcpy     \
				ft_memset     \
				ft_strlen     \
				ft_isalnum    \
				ft_isascii    \
				ft_isprint    \
				ft_memmove    \
				ft_strlcpy    \
				ft_strlcat    \
				ft_toupper    \
				ft_tolower    \
				ft_strchr     \
				ft_strrchr    \
				ft_strncmp    \
				ft_memchr     \
				ft_memcmp     \
				ft_strnstr    \
				ft_atoi       \
				ft_calloc     \
				ft_strdup     \
				ft_substr     \
				ft_strjoin    \
				ft_strtrim    \
				ft_split      \
				ft_itoa       \
				ft_strmapi    \
				ft_putchar_fd \
				ft_putstr_fd  \
				ft_putendl_fd \
				ft_putnbr_fd  \
				ft_striteri

SRCS_DIR	:= 	src/
OBJS_DIR	:= 	obj/

INCLUDE		:= include

CC          := gcc
CFLAGS      := -Wall -Wextra -Werror -I $(INCLUDE)

AR			:= ar
ARFLAGS		:= -r -c -s

#------------------------------------------------#
#                   COMMANDS                     #
#------------------------------------------------#

RM          := rm -f

#------------------------------------------------#
#                     COLORS                     #
#------------------------------------------------#

DEF_COLOR 	= \033[0;39m
GRAY 		= \033[0;90m
RED 		= \033[0;91m
GREEN 		= \033[0;92m
YELLOW 		= \033[0;93m
BLUE 		= \033[0;94m
MAGENTA		= \033[0;95m
CYAN 		= \033[0;96m
WHITE 		= \033[0;97m

#------------------------------------------------#
#                  EXTRA RULES                   #
#------------------------------------------------#
# all       default goal
# $(NAME)   linking .o -> binary
# %.o       compilation .c -> .o
# clean     remove .o
# fclean    remove .o + binary
# re        remake default goal

SRCS		:= $(addprefix $(SRCS_DIR), $(addsuffix .c , $(SRC)))
OBJS        := $(addprefix $(OBJS_DIR), $(addsuffix .o , $(SRC)))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	ranlib $(NAME)
	@echo "$(GREEN)Libft compiled!$(DEF_COLOR)"

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c 
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	@$(RM) -r $(OBJS_DIR)
	@echo "$(BLUE)Libft object files cleaned!$(DEF_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re:
	@$(MAKE) fclean
	@$(MAKE) all
	@echo "$(GREEN)Cleaned and rebuilt everything for libft!$(DEF_COLOR)"

#------------------------------------------------#
#                SPECIAL TARGETS                 #
#------------------------------------------------#

.PHONY: all clean fclean re 