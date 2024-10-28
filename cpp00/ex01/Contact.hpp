/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:16:54 by edegraev          #+#    #+#             */
/*   Updated: 2024/07/18 09:28:34 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void Set(int id, std::string first, std::string last, std::string nick, std::string phone, std::string secret);
        int GetId();
        std::string GetFirst(void);
		std::string GetLast(void);
		std::string GetNick(void);
		std::string GetPhone(void);
		std::string GetSecret(void);
	private:
        int id;
		std::string first;
		std::string last;
		std::string nick;
		std::string phone;
		std::string secret;
};

#endif
