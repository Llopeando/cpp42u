# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 16:43:38 by ullorent          #+#    #+#              #
#    Updated: 2022/12/01 16:45:08 by ullorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

CPPSRC = main.cpp \
ClapTrap.cpp \

CPPINCLUDE = ClapTrap.hpp \

CPPOSRC = $(CPPSRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra
CLANGCMD = clang++

all: $(NAME)

%.o: %.cpp
	@$(CLANGCMD) $(CPPFLAGS) -c $^ -o $@

$(NAME): $(CPPOSRC) $(CPPINCLUDE)
	@$(CLANGCMD) $(CPPFLAGS) $(CPPOSRC) -I. -o $(NAME)
	@echo "\033[92mcpp03/ex00 has been successfully compiled!\033[0m"

clean:
	@rm -rf *.o
	@rm -rf *.dSYM

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[33mAll has been cleaned!\033[0m"

re: fclean all

.PHONY: all clean fclean re