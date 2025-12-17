# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: speters <speters@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/05 12:39:53 by speters           #+#    #+#              #
#    Updated: 2025/12/15 11:34:34 by speters          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRCS = main.cpp\
	srcs/Animal.cpp\
	srcs/Cat.cpp\
	srcs/Dog.cpp\
	srcs/WrongAnimal.cpp\
	srcs/WrongCat.cpp\

OBJS = $(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o:%.cpp
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
	
clean: 
	@rm -f $(OBJS)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re