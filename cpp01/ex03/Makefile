# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 13:55:20 by ullorent          #+#    #+#              #
#    Updated: 2022/09/22 13:56:11 by ullorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CPPSRC = main.cpp \
Weapon.cpp \
HumanA.cpp \
HumanB.cpp \

CPPINCLUDE = Weapon.hpp \
HumanA.hpp \
HumanB.hpp \

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
	rm -rf *.dSYM

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re