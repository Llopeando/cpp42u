# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 13:08:58 by ullorent          #+#    #+#              #
#    Updated: 2022/12/21 19:31:58 by ullorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = firent

CPPSRC = main.cpp \
Animal.cpp \
Cat.cpp \
Dog.cpp \
Brain.cpp \

CPPINCLUDE = Animal.hpp \
Cat.hpp \
Dog.hpp \
Brain.hpp \

CPPOSRC = $(CPPSRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra -Wshadow -Wno-shadow
CLANGCMD = clang++

all: $(NAME)

%.o: %.cpp
	@$(CLANGCMD) $(CPPFLAGS) -c $^ -o $@

$(NAME): $(CPPOSRC) $(CPPINCLUDE)
	@$(CLANGCMD) $(CPPFLAGS) $(CPPOSRC) -I. -o $(NAME)
	@echo "\033[92mcpp04/ex01 has been successfully compiled!\033[0m"

clean:
	@rm -rf *.o
	@rm -rf *.dSYM

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[33mAll has been cleaned!\033[0m"

re: fclean all

.PHONY: all clean fclean re