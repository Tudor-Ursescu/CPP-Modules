/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:31:55 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/03 11:46:51 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
// # include <cctype>
# include <csignal>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact() {};
    ~Contact() {};
    void setFirstName(const std::string& name);
    void setLastName(const std::string& name);
    void setNickname(const std::string& name);
    void setPhoneNumber(const std::string& number);
    void setDarkestSecret(const std::string& secret);
    
    const std::string& getFirstName() const;
    const std::string& getLastName() const;
    const std::string& getNickname() const;

    void displayShortInfo(int index) const;
    void displayFullInfo() const;
private:
    std::string replaceTabs(const std::string& text) const;
    std::string truncateText(const std::string& text) const;
};

#endif