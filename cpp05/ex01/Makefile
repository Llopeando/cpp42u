# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 16:11:39 by ullorent          #+#    #+#              #
#    Updated: 2023/01/11 19:11:21 by ullorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CPPSRC = main.cpp \
Bureaucrat.cpp \

CPPINCLUDE = Bureaucrat.hpp \

CPPOSRC = $(CPPSRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra
CLANGCMD = c++

all: $(NAME)

%.o: %.cpp
	@$(CLANGCMD) $(CPPFLAGS) -c $^ -o $@

$(NAME): $(CPPOSRC) $(CPPINCLUDE)
	@$(CLANGCMD) $(CPPFLAGS) $(CPPOSRC) -I. -o $(NAME)
	@echo "\033[92mcpp05/ex01 has been successfully compiled!\033[0m"

clean:
	@rm -rf *.o
	@rm -rf *.dSYM

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[33mAll has been cleaned!\033[0m"

re: fclean all

.PHONY: all clean fclean re
