# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 13:41:15 by ullorent          #+#    #+#              #
#    Updated: 2023/05/23 14:51:43 by ullorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

CPPSRC = main.cpp \

CPPINCLUDE = easyfind.hpp \

CPPOSRC = $(CPPSRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CLANGCMD = c++

all: $(NAME)

$(NAME): $(CPPOSRC) $(CPPINCLUDE)
	@$(CLANGCMD) $(CPPFLAGS) $(CPPSRC) -I. -o $(NAME)
	@echo "\033[92mcpp08/ex00 has been successfully compiled!\033[0m"

clean:
	@rm -rf *.o
	@rm -rf *.dSYM

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[33mAll has been cleaned!\033[0m"

re: fclean all

.PHONY: all clean fclean re