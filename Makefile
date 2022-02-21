# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 14:30:43 by ksaffron          #+#    #+#              #
#    Updated: 2022/02/21 15:28:53 by ksaffron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FLAGS = -Wall -Wextra -Werror

HEADER = push_swap.h
SOURCE = ft_error.c push_swap.c
OBJECTS = $(SOURCE:.c=.o)

RM = rm -f

all: $(NAME)

%.o : %.c $(HEADER)
	cc $(FLAGS) -c $< -o $@

$(NAME): $(OBJECTS) $(HEADER)
	cc $(FLAGS) -o $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
