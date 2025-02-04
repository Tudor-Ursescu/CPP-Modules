/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:04:27 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/01 17:34:29 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string& name) {firstName = name; }
void Contact::setLastName(const std::string& name) {lastName = name; }
void Contact::setNickname(const std::string& name) {nickname = name; }
void Contact::setPhoneNumber(const std::string& number) {phoneNumber = number; }
void Contact::setDarkestSecret(const std::string& secret) {darkestSecret = secret; }

const std::string& Contact::getFirstName() const { return firstName; }
const std::string& Contact::getLastName() const { return lastName; }
const std::string& Contact::getNickname() const { return nickname; }

void Contact::displayShortInfo(int index) const {
        std::cout << "|" << std::setw(5) << index
                  << "|" << std::setw(10) << truncateText(firstName)
                  << "|" << std::setw(10) << truncateText(lastName)
                  << "|" << std::setw(10) << truncateText(nickname)
                  << "|" << std::endl;
}
    
void Contact::displayFullInfo() const {
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Nickname: " << nickname << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

std::string Contact::replaceTabs(const std::string& text) const {
    std::string result;
    for (int i = 0; text[i]; i++) {
        if (text[i] == '\t')
            result += "    ";
        else
            result += text[i];
    }
    return result;
}

std::string Contact::truncateText(const std::string& text) const {
    std::string cleanText = replaceTabs(text);
    if (text.length() > 10)
        return cleanText.substr(0, 9) + ".";
    return text;
}