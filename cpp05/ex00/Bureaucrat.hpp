/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:11:56 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/04 15:16:57 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define MIN_GRADE 1
#define MAX_GRADE 150

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;

public:
	// constructors
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

	// getters
	std::string getName() const;
	int getGrade() const;

	// exceptions
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

	// functions
	void incrementGrade();
	void decrementGrade();
};

// out
std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);