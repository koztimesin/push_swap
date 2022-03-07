# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 14:30:43 by ksaffron          #+#    #+#              #
#    Updated: 2022/03/07 19:35:17 by ksaffron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FLAGS = -Wall -Wextra -Werror

HEADER = push_swap.h
SOURCE = ft_error.c push_swap.c ft_input_into_stack.c ft_is_valid.c ft_swap_nodes.c ft_sort.c
OBJECTS = $(SOURCE:.c=.o)
LIBFT_SOURCE = ./libft/
LIBFT = libft.a

RM = rm -f

all: $(NAME)

%.o : %.c $(HEADER)
	cc $(FLAGS) -I. -I$(LIBFT_SOURCE) -c $< -o $@

$(NAME): $(OBJECTS) $(HEADER) $(LIBFT_SOURCE)$(LIBFT)
	cc $(FLAGS) $(OBJECTS) $(LIBFT_SOURCE)$(LIBFT) -o $(NAME)

$(LIBFT_SOURCE)$(LIBFT): libft ;

libft:
	make bonus -C $(LIBFT_SOURCE)

clean:
	$(RM) $(OBJECTS)
	make clean -C $(LIBFT_SOURCE)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_SOURCE)

re: fclean all

.PHONY: all clean fclean re libft
