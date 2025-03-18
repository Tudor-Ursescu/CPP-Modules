/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:07:51 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/18 18:40:12 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    // try {
    //     Intern someRandomIntern;
    //     AForm* rrf;
    //     rrf = someRandomIntern.makeForm("robotomy request", "Chihuahua");
    //     Bureaucrat theBoss("The Boss", 1);
    //     rrf->beSigned(theBoss);
    //     theBoss.executeForm(*rrf);
    //     delete rrf;
    //     AForm* f1 = someRandomIntern.makeForm("blablabla", "big useless target");
    //     delete f1;
        
    // } catch (std::exception& e) {
    //     std::cerr << RED <<  "Exception caught: " << e.what() << RESET << std::endl;
    // }

    try {
        Intern someRandomIntern;
        Bureaucrat theBoss("The Boss", 1);
        //here i define the form names and their targets
        std::string formRequest[][2] = {
            {"shrubbery creation", "home"},
            {"robotomy request", "Chihuahua"},
            {"shrubbery creation", "park"},
            {"presidential pardon", "Bill"},
            {"bla bla bla ", "big useless target"}
        };
        //create an array for storring created forms
        AForm* forms[5];

        for (int i = 0; i < 5; i++) {
            forms[i] = someRandomIntern.makeForm(formRequest[i][0], formRequest[i][1]);
            forms[i]->beSigned(theBoss);
            theBoss.executeForm(*forms[i]);
            delete forms[i];
        }
        // for (int i = 0; i < 5; i++) {
        //     delete forms[i];
        // }
    } catch (std::exception& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }
    return 0;
}

// if there is an exception thrown right after we exit out of the for loop at 53,
// then the AForms are not deleted trough the delete for loop, 
// so we delete them directly after use