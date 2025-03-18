/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:07:51 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/18 14:23:27 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
    try {
        Bureaucrat b1("Tudor" , 1);
        ShrubberyCreationForm f1("park");
        RobotomyRequestForm f2("Tudor");
        PresidentialPardonForm f3("KING KONG");
        b1.signForm(f1);
        b1.signForm(f2);
        b1.signForm(f3);
        std::cout << "the gradeToSign of " << f1.getName() << " = " << f1.getGradeToExecute() << std::endl;
        std::cout << "the grade of " << b1.getName() << " = " << b1.getGrade() << std::endl;
        b1.executeForm(f1);
        b1.executeForm(f2);
        b1.executeForm(f3);
        std::cout << "is f1 signed by b1 : " << f1.getIsSigned() << std::endl;
    } catch (std::exception& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }
    return 0;
}