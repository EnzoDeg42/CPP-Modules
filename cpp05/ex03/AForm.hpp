/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:35:27 by edegraev          #+#    #+#             */
/*   Updated: 2024/11/19 11:06:31 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "Bureaucrat.hpp"
class Bureaucrat;

#define MIN_GRADE 1
#define MAX_GRADE 150

class AForm
{
private:
	std::string const _name;
	bool _signed;
	int const _gradeToSign;
	int const _gradeToExecute;
    std::string const _target;

public:
	// constructors
	AForm(std::string const name, std::string const _target, int gradeToSign, int gradeToExecute);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
    virtual ~AForm();

    virtual void action() const = 0;

    // functions
    void beSigned(Bureaucrat &bureaucrat);
    void execute(Bureaucrat const & executor) const;

	// getters
	std::string getName() const;
	bool getSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
    std::string getTarget() const;

	// exceptions
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

    class FormNotSignedException : public std::exception
    {
        const char *what() const throw();
    };
};

// out
std::ostream &operator<<(std::ostream &out, AForm const &form);