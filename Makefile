# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/13 12:17:39 by alegent           #+#    #+#              #
#    Updated: 2015/02/28 15:30:30 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#This is a typical Makefile, re-usable anytime you want to compil C project.
#All is in quiet for now, thank to do all the completion that needed for
# specify project

#Define name of program here
NAME= 2042

#SRC BLOC
# define all the .c file in the variable SRC NAME
SRC_PATH= srcs/
SRC_NAME= main.c \
		  create_map.c \
		  new_xy.c \
		  init_map.c \
		  key_hook.c
SRC= $(addprefix $(SRC_PATH), $(SRC_NAME))

#OBJ BLOC
#Do nothing here
OBJ_PATH= obj/
OBJ_NAME= $(SRC_NAME:.c=.o)
OBJ= $(addprefix $(OBJ_PATH), $(OBJ_NAME))

#GCC BLOC
#GCC flag, you don't have to modify this (but you're free to go)
GCC= gcc -Wall -Wextra -Werror

#INCLUDE BLOC
#Don't forget to include the other librarie that yo use
INC_LIB= libft/
INC_PATH= includes/
INC= -I $(INC_LIB) -I $(INC_PATH)

#Once again, don't forget to includes librairy that you use !
LIB= -L libft/ -lft

#FRAMEWORK BLOC
#Don't forget to add framework that you need !
FRAMEWORK= -lncurses
all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/ re
	@make -C libft/ clean
	@$(GCC) $(SRC) $(INC) $(LIB) $(FRAMEWORK) -o $(NAME)
	@echo "$(NAME) has been created !"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" 2> /dev/null
	@$(GCC) $(INC) $(LIB) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_PATH)
	@echo "Objects files are deleted."

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) is deleted."

re: fclean all

norme:
	@norminette $(INC_LIB)*.[ch]
	@norminette $(SRC)
	@norminette $(INC_PATH)*.h

.PHONY: clean fclean re norme
