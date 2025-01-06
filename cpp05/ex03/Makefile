# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/05 09:50:56 by edegraev          #+#    #+#              #
#    Updated: 2024/11/27 15:08:11 by edegraev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern
SRC_FORM = forms/PresidentialPardonForm.cpp forms/RobotomyRequestForm.cpp forms/ShrubberyCreationForm.cpp
SRC = AForm.cpp Bureaucrat.cpp main.cpp Intern.cpp $(SRC_FORM)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I./ -I./forms

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
