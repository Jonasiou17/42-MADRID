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

# Variables

NAME 		:= libftprintf.a

SRC			:=	ft_printf            \
				print_character      \
				print_hex_upper      \
				print_hex_lower      \
				print_integer        \
				print_memory_address \
				print_percent        \
				print_string         \
				print_unsigned 

SRCS_DIR	:= src/
OBJS_DIR	:= obj/

INCLUDE		:= include

CC			:= gcc
CFLAGS		:= -Wall -Werror -Wextra -I $(INCLUDE)

AR			:= ar
ARFLAGS		:= -rcs

RM			:= rm -f

SRCS	:= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC)))
OBJS	:= $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC)))

# Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# Recipes

all: $(NAME)

$(NAME): $(OBJS)
	@make -C Libft
	@cp Libft/libft.a .
	@mv libft.a $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(GREEN)libftprintf compiled!$(DEF_COLOR)"

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJS_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make clean -C Libft
	@$(RM) -r $(OBJS_DIR)
	@echo "$(BLUE)libftprintf object files cleaned!$(DEF_COLOR)"

fclean:
	@make fclean -C Libft
	@$(MAKE) clean
	@$(RM) $(NAME)
	@echo "$(CYAN)libftprintf executable files cleaned!$(DEF_COLOR)"

re: 
	$(MAKE) fclean
	$(MAKE) all
	@echo "$(GREEN)Cleaned and rebuilt everything for libftprintf!$(DEF_COLOR)"

norm: 
	@norminette $(SRCS) $(INCLUDE) Libft | grep -v Norme -B1 || true

.PHONY: all clean fclean re




