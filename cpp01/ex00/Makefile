# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 12:17:20 by ullorent          #+#    #+#              #
#    Updated: 2022/09/21 13:37:23 by ullorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CPPSRC = main.cpp \
Zombie.cpp \
newZombie.cpp \
randomChump.cpp

CPPINCLUDE = Zombie.hpp \

CPPOSRC = $(CPPSRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra
CLANGCMD = clang++

all: $(NAME)

%.o: %.cpp
	$(CLANGCMD) $(CPPFLAGS) -c $^ -o $@

$(NAME): $(CPPOSRC) $(CPPINCLUDE)
	$(CLANGCMD) $(CPPFLAGS) $(CPPOSRC) -I. -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
