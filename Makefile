# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 14:30:43 by ksaffron          #+#    #+#              #
#    Updated: 2022/04/01 18:29:02 by ksaffron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_B = checker
FLAGS = -Wall -Wextra -Werror -g -fsanitize=address
CC = gcc

HEADER = push_swap.h push_swap_bonus.h

SOURCE =	ft_error.c push_swap.c ft_input_into_stack.c \
			ft_is_valid.c ft_swap_nodes.c ft_sort.c \
			ft_push_node.c ft_rotate_node.c ft_reverse_rotate_nodes.c \
			ft_bubble_sort.c ft_two_nodes.c sort_three.c ft_sort_five.c get_best_node.c \

SOURCE_B =	ft_error.c ft_input_into_stack.c ft_is_valid.c \
			push_swap_bonus.c ft_swap_nodes_bonus.c get_next_line/get_next_line.c\
			ft_push_node_bonus.c ft_rotate_node_bonus.c get_next_line/get_next_line_utils.c \
			ft_reverse_rotate_nodes_bonus.c \

OBJECTS = $(SOURCE:.c=.o)
OBJECTS_B = $(SOURCE_B:.c=.o)
LIBFT_SOURCE = ./libft/
LIBFT = libft.a

RM = rm -f

all: $(NAME)

%.o : %.c $(HEADER) Makefile
	$(CC) $(FLAGS) -I. -I$(LIBFT_SOURCE) -c $< -o $@

$(NAME): $(OBJECTS) $(HEADER) $(LIBFT_SOURCE)$(LIBFT) Makefile
	$(CC) $(FLAGS) $(OBJECTS) $(LIBFT_SOURCE)$(LIBFT) -o $(NAME)


$(NAME_B): $(OBJECTS_B) $(HEADER) $(LIBFT_SOURCE)$(LIBFT) Makefile
	$(CC) $(FLAGS) $(OBJECTS_B) $(LIBFT_SOURCE)$(LIBFT) -o $(NAME_B)

$(LIBFT_SOURCE)$(LIBFT): libft ;

libft:
	make bonus -C $(LIBFT_SOURCE)

bonus: $(NAME_B)

clean:
	$(RM) $(OBJECTS)
	$(RM) $(OBJECTS_B)
	make clean -C $(LIBFT_SOURCE)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME_B)
	make fclean -C $(LIBFT_SOURCE)

re: fclean all

.PHONY: all clean fclean re libft bonus
