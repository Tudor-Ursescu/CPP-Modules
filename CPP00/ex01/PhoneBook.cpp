/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:22:17 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/03 11:22:06 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0), oldestIndex(0) {}
PhoneBook::~PhoneBook() {}
void PhoneBook::addContact() {
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
        
    if (!getInput("Enter First Name: ", firstName)) return;
    if (!getInput("Enter Last Name: ", lastName)) return;
    if (!getInput("Enter Nickname: ", nickname)) return;
    if (!getInputNumber("Enter Phone Number: ", phoneNumber)) return;
    if (!getInput("Enter Darkest Secret: ", darkestSecret)) return;
    
    Contact &newContact = contacts[count < MAX_CONTACTS ? count : oldestIndex];
    
    newContact.setFirstName(firstName);
    newContact.setLastName(lastName);
    newContact.setNickname(nickname);
    newContact.setPhoneNumber(phoneNumber);
    newContact.setDarkestSecret(darkestSecret);
    
    if (count < MAX_CONTACTS)
        count++;
    else
        oldestIndex = (oldestIndex + 1) % MAX_CONTACTS;
    std::cout << "Contact added successfully!\n";
}

void PhoneBook::searchContact() const {
    if (count == 0) {
        std::cout << "No contacts available!\n";
        return;   
    }
    std::cout << "|" << std::setw(5) << "Index"
                << "|" << std::setw(10) << "First Name"
                << "|" << std::setw(10) << "Last Name"
                << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
    for (int i = 0; i < count; i++) {
        contacts[i].displayShortInfo(i);
    }
    
    std::cout << "Enter the index to view details: ";
    std::string input;
    std::getline(std::cin, input);
    
    if (isValidIndex(input)) {
        int index;
        std::istringstream(input) >> index;
        if (index >= 0 && index < count) {
            contacts[index].displayFullInfo();
        }
        else
            std::cout << "Invalid index.\n"; 
    }
    else
        std::cout << "Invalid input. Please enter a valid number.\n";
}

bool PhoneBook::isValidIndex(const std::string& input) const {
    for (std::size_t i = 0; i < input.length(); i++) {
        if (!std::isdigit(input[i]))
            return false;
    }
    return true;
}
bool PhoneBook::isEmptyInput(const std::string& input) {
    if (input.empty())
        return true;
    for (std::size_t i = 0; i < input.length(); i++) {
        if (!std::isspace(input[i]))
            return false;
    }
    return true;
}
bool PhoneBook::getInput(const std::string& prompt, std::string&result) {
    std::cout << prompt;
    std::getline(std::cin, result);
    if (isEmptyInput(result)) {
        std::cout << "Empty field not accepted.\n";
        return false;
    }
    return true;
}
bool PhoneBook::getInputNumber(const std::string& prompt, std::string&result) {
    std::cout << prompt;
    std::getline(std::cin, result);
    if (isEmptyInput(result)) {
        std::cout << "Empty field not accepted.\n";
        return false;
    }
    for (int i = 0; result[i]; i++) {
        if (!std::isdigit(result[i])){
            std::cout <<"Invalid number sequence.\n";
            return false;
        }
    }
    return true;
}