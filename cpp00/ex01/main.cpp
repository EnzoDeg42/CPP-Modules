/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:59:43 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/08 12:13:07 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string ask(std::string question)
{
	std::string answer;

	std::cout << question << ": ";
	std::getline(std::cin, answer);
	while (answer.size() > 64 || answer.size() == 0)
	{
		std::cerr << question << " must be between 1 and 64 characters" << std::endl;
		std::cout << question << ": ";
		std::getline(std::cin, answer);
	}
	return answer;
}

void Add(PhoneBook &phonebook)
{
	std::string first;
	std::string last;
	std::string nick;
	std::string phone;
	std::string secret;
	
	first = ask("First name");
	last = ask("Last name");
	nick = ask("Nickname");
	phone = ask("Phone number");
	secret = ask("Darkest secret");	
	phonebook.Add(first, last, nick, phone, secret);
}

int to_int(std::string str) {
	int result = 0;
	bool is_negative = false;
	size_t start_index = 0;

	if (str.empty()) {
		return -1;
	}
	
	if (str[0] == '-') {
		is_negative = true;
		start_index = 1;
	}
	
	for (size_t i = start_index; i < str.size(); ++i) {
		if (str[i] < '0' || str[i] > '9') {
			return -1;
		}
		result = result * 10 + (str[i] - '0');
	}

	return is_negative ? -result : result;
}


int main()
{
	PhoneBook phonebook;

	// phonebook.Add("Enzo", "Shark", "eshark", "000-000-000", "lasagna");
	// phonebook.Add("John", "Doe", "jdoe", "111-111-111", "burger");
	// phonebook.Add("Alice", "Wonderland", "awonder", "222-222-222", "pizza");
	// phonebook.Add("Bob", "Builder", "bbuilder", "333-333-333", "pasta");
	// phonebook.Add("Charlie", "Chaplin", "cchaplin", "444-444-444", "sushi");
	// phonebook.Add("Donald", "Duck", "dduck", "555-555-555", "ramen");
	// phonebook.Add("Eva", "Green", "egreen", "666-666-666", "tacos");
	// phonebook.Add("Frodo", "Baggins", "fbaggins", "777-777-777", "kebab");
	// phonebook.Add("Gandalf", "The Grey", "gthegrey", "888-888-888", "curry");
	// phonebook.PrintTable();

	std::cout << "Commands: ADD, SEARCH, EXIT" << std::endl;
	std::string input;
	while (true)
	{
		std::cout << "PhoneBook> ";
		std::getline(std::cin, input);

		if (input == "ADD")
			Add(phonebook);	
		else if (input == "SEARCH")
		{
			phonebook.PrintTable();
			std::cout << "Enter index of the contact: ";
			std::getline(std::cin, input);
			phonebook.PrintData(to_int(input));
		}
		else if (input == "EXIT")
			break;
	}
	
	return 0;
}
