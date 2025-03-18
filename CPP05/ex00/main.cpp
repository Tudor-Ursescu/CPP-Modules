/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:07:51 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/17 11:41:33 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        std::cout << BLUE << "          VALID BUREAUCRATS          " << RESET << std::endl;
        Bureaucrat b1("Ursescu", 1);
        Bureaucrat b2("Lupu", 150);
        Bureaucrat b3("Vlad", 2);
    
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;
    
        std::cout << PINK << "         TESTING INCREMENTATIONS AND DECREMENTATIONS         " << RESET << std::endl;
    
        b1.decrementGrade(10);
        b2.incrementGrade(100);
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl; 
    } catch (std::exception& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    try {
        std::cout << RED << "          INVALID BUREAUCRATS         " << RESET << std::endl;
        Bureaucrat wrong1("Tlupu", 151);   
    } catch (std::exception& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }
    
    try {
        Bureaucrat tooHigh("T-Bone", 0);
    } catch (std::exception& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    try {
        Bureaucrat b4("Bob", 1);
        b4.incrementGrade(2);
    } catch (std::exception& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    try {
        Bureaucrat b5("Elon", 150);
        b5.decrementGrade(2);
    } catch (std::exception& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    try {
        std::cout << "        INCREMENT/DECREMENT WITH NEGATIVE NUMBER" << RESET << std::endl;
        Bureaucrat b6("GOD", 1);
        Bureaucrat b7("Bear", 5);
        b6.decrementGrade(-2);
        b7.incrementGrade(-3);
    } catch (std::exception& e) {
    std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }
    return 0;
}

// we use std::exception& e in catch() because:
// *it allows to catch all exceptions in a generic way;
// *makes your program more robust by handling errors instead of crashing;