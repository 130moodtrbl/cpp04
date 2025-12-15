# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: speters <speters@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/05 12:39:53 by speters           #+#    #+#              #
#    Updated: 2025/12/15 16:21:51 by speters          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRCS = main.cpp\
	srcs/AAnimal.cpp\
	srcs/Cat.cpp\
	srcs/Dog.cpp\
	srcs/WrongAnimal.cpp\
	srcs/WrongCat.cpp\
	srcs/Brain.cpp\

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
