/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:39:23 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/04 11:13:37 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void handle_sigs(int signal)
{
    (void)signal;
    std::cout << std::endl;
    _exit(1);
}

void trim(std::string& str) {

    size_t start = 0;
    while (start < str.length() && std::isspace(str[start])) {
        ++start;
    }

    size_t end = str.length();
    while (end > start && std::isspace(str[end - 1])) {
        --end;
    }

    str = str.substr(start, end - start);
}

int main(){
    PhoneBook phonebook;
    std::string command;
    signal(SIGQUIT, handle_sigs);

    while (true){
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (std::cin.eof() == true)
            break;
        trim(command);
        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else if (command == "EXIT")
        {
            std::cout << "Goodbye!\n";
            break;
        }
        else
            std::cout << "Wrong command. Try again(ADD, SEARCH, EXIT).\n";
    }
    return(0);
}