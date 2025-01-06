# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/05 09:50:56 by edegraev          #+#    #+#              #
#    Updated: 2024/11/27 15:09:32 by edegraev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 28b
SRC_FORM = forms/PresidentialPardonForm.cpp forms/RobotomyRequestForm.cpp forms/ShrubberyCreationForm.cpp
SRC = AForm.cpp Bureaucrat.cpp main.cpp $(SRC_FORM)
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I./ -I./forms

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
