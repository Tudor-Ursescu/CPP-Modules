/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:01:48 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/04 15:37:02 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string hello = "HI THIS IS BRAIN";
    std::string* stringPTR = &hello;
    const std::string& stringREF = hello;

    std::cout << "The memory address of the string variable: " << &hello << '\n';
    std::cout << "The memory address held by stringPTR: " << stringPTR << '\n';
    std::cout << "The memory address held by stringREF: " << &stringREF << '\n';
    std::cout << "The value of the string variable: " << hello << '\n';
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << '\n';
    std::cout << "The value pointed to by stringREF: " << stringREF << '\n';
}