/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:49:48 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/03 11:20:17 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


# include "Contact.hpp"
# define MAX_CONTACTS 8

class PhoneBook {
private:
    Contact contacts[MAX_CONTACTS];
    int count;
    int oldestIndex;
public:
    PhoneBook();
    ~PhoneBook();
    void addContact();
    void searchContact() const;
private:
    bool isValidIndex(const std::string& input) const;
    bool isEmptyInput(const std::string& input);
    bool getInput(const std::string& prompt, std::string&result);
    bool getInputNumber(const std::string& prompt, std::string&result);
};

#endif