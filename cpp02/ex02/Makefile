# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/05 09:50:56 by edegraev          #+#    #+#              #
#    Updated: 2024/09/04 11:07:35 by edegraev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(DEP)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all

-include $(DEP)

.PHONY: all clean fclean re
