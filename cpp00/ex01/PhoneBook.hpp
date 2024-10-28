/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:53:41 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/18 09:28:37 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void Add(std::string first, std::string last, std::string nick, std::string phone, std::string secret);
		void PrintTable(void);
        bool PrintData(int index);
	private:
        int GetLastId(void);
        int GetFirstId(void);
		void PrintColumn(std::string text);
		Contact table[8];
};

#endif