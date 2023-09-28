# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 14:23:39 by ullorent          #+#    #+#              #
#    Updated: 2023/09/26 16:25:31 by ullorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CPPSRC = main.cpp \
BitcoinExchange.cpp \

CPPINCLUDE = BitcoinExchange.hpp \

CPPOSRC = $(CPPSRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CLANGCMD = c++

all: $(NAME)

%.o: %.cpp $(CPPINCLUDE)
	 @$(CLANGCMD) $(CPPFLAGS) -c $< -o $@

$(NAME): $(CPPOSRC) $(CPPINCLUDE)
	$(CLANGCMD) $(CPPFLAGS) $(CPPOSRC) -I. -o $(NAME)
	@echo "\033[92mcpp09/ex00 has been successfully compiled!\033[0m"

clean:
	@rm -rf *.o
	@rm -rf *.dSYM

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[33mAll has been cleaned!\033[0m"

re: fclean all

.PHONY: all clean fclean re