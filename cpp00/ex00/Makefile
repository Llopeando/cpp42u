# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 14:31:45 by ullorent          #+#    #+#              #
#    Updated: 2022/06/27 14:36:05 by ullorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CPPSRC = megaphone.cpp
CPPOSRC = $(CSRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra
CLANGCMD = clang++

all: $(NAME)

%.o: %.cpp
	$(CLANGCMD) $(CPPFLAGS) $(CPPSRC) -o $@

$(NAME): $(CPPOSRC)
	$(CLANGCMD) $(CPPFLAGS) $(CPPSRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
