# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboymond <aboymond@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 14:35:30 by aboymond          #+#    #+#              #
#    Updated: 2022/07/07 12:36:58 by aboymond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Sources && Obj 

PUSH_SWAP			=			push_swap.c push.c swap.c revers_rotate.c \
								rotation.c check_arg.c malloc.c pre_tri_radix.c\
								p_s_utils.c error.c radix.c
OBJ					=			$(PUSH_SWAP:.c=.o)
M_LIB				=			$(MAKE) -C ./libft
S_LIB				=			cd ./libft && $(MAKE) fclean
LIB					=			./libft/libft.a

#	Flags

NAME				=			push_swap
FLAGS				=			-Wall -Werror -Wextra -g -ggdb -fsanitize=address -fno-omit-frame-pointer 
CC					=			gcc

#	Couleurs

GREEN				=			\033[1;32m
RED					=			\033[1;31m
ENDCOLOR			=			\033[0m

#	Tests

START_COMP			=			echo "\n $(GREEN)Compilation en cours \n$(ENDCOLOR)"
START_LIB			=			echo "\n $(GREEN)Compilation LIBFT \n $(ENDCOLOR)"
SUPP_OBJ			=			echo "\n $(RED)Suppression des objs \n $(ENDCOLOR)"
SUPP_EXE			=			echo "\n $(RED)Suppression des executables \n $(ENDCOLOR)"
TERM				=			echo "\n $(GREEN)Termine \n $(ENDCOLOR)"

#	Compil

all :			$(NAME)

$(NAME) : 		start push_swap

start : 		
				@$(START_LIB)
				@$(M_LIB)
				@$(START_COMP)

push_swap :
				@$(CC) $(PUSH_SWAP) $(LIB) $(FLAGS) -o $(NAME)
				@$(TERM)
				
clean :
				rm -rf $(OBJ)
				cd ./libft && make clean
				@$(SUPP_OBJ)

fclean : clean
				rm -rf $(NAME)
				cd ./libft && make fclean
				@$(SUPP_EXE)

re :			fclean all

.PHONY : 		push_swap all clean fclean re 