# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 12:10:20 by ullorent          #+#    #+#              #
#    Updated: 2022/09/09 19:23:59 by ullorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CPPSRC = Main.cpp \
PhonyBooky.cpp \
Contacts.cpp \

CPPINCLUDE = PhonyBooky.hpp \
Contacts.hpp \

CPPOSRC = $(CSRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra
CLANGCMD = clang++

all: $(NAME)

$(NAME): $(CPPOSRC)
	$(CLANGCMD) $(CPPFLAGS) $(CPPSRC) -ICPPINCLUDE -o $(NAME)

%.o: %.cpp
	$(CLANGCMD) $(CPPFLAGS) $(CPPSRC) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
