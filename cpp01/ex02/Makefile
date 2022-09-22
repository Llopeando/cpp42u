# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ullorent <ullorent@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 13:32:16 by ullorent          #+#    #+#              #
#    Updated: 2022/09/22 13:51:28 by ullorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hithisisbrain

CPPSRC = main.cpp \

CPPOSRC = $(CPPSRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra
CLANGCMD = clang++

all: $(NAME)

%.o: %.cpp
	$(CLANGCMD) $(CPPFLAGS) -c $^ -o $@

$(NAME): $(CPPOSRC)
	$(CLANGCMD) $(CPPFLAGS) $(CPPOSRC) -I. -o $(NAME)

clean:
	rm -rf *.o
	rm -rf *.dSYM

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re