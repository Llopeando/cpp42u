# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 16:37:40 by ullorent          #+#    #+#              #
#    Updated: 2022/11/25 14:26:42 by ullorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsp

CPPSRC = main.cpp \
Fixed.cpp \
Point.cpp \
bsp.cpp

CPPINCLUDE = Fixed.hpp \

CPPOSRC = $(CPPSRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address
CLANGCMD = clang++

all: $(NAME)

%.o: %.cpp
	$(CLANGCMD) $(CPPFLAGS) -c $^ -o $@

$(NAME): $(CPPOSRC) $(CPPINCLUDE)
	$(CLANGCMD) $(CPPFLAGS) $(CPPOSRC) -I. -o $(NAME)

clean:
	rm -rf *.o
	rm -rf *.dSYM

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re