/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:07:51 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/18 19:04:37 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "\n";
    std::cout << "CLEAR EXAMPLE: " << std::endl;
    std::cout << "\n";
    try {
        Bureaucrat b1("Tudor", 1);
        Form f1("form1", 1, 150);
        std::cout << f1;
        b1.signForm(f1);
    } catch (std::exception& e){
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }
    
    std::cout << "\n\n\n";
    std::cout << "ERROR EXAMPLE(FORM CONSTRUCTOR ERROR):" << std::endl;
    std::cout << "\n";
    try {
        Bureaucrat b2("Vlad", 2);
        Form f2("form2", -2, 20);
        std::cout << f2;
        b2.signForm(f2);
    } catch (std::exception& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    std::cout << "\n\n\n";
    std::cout << "EXAMPLE WITH GRADE NOT HIGH ENAUGH TO SIGN FORM:" << std::endl;
    std::cout << "\n";
    try {
        Bureaucrat b3("Lupu", 150);
        Form f3("form3", 1, 1);
        std::cout << f3;
        b3.signForm(f3);
    } catch (std::exception& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    return 0;
}