/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:57:40 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/18 18:05:30 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {
    std::cout << ORANGE << "Intern default constructor called" << RESET << std::endl;
}

Intern::~Intern() {
    std::cout << ORANGE <<"Intern destructor called" << RESET << std::endl;
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) {
    std::string formNames[3] = { "presidential pardon", "robotomy request", "shrubbery creation" };
    for (int i = 0; i < 3; i++) {
        if (formNames[i] == name) {
            std::cout << ORANGE << "Intern creates " << name << RESET << std::endl;
            if (i == 0) return new PresidentialPardonForm(target);
            if (i == 1) return new RobotomyRequestForm(target);
            if (i == 2) return new ShrubberyCreationForm(target);
        }
    }   
    throw NonExistentFormExceptiom();
}

const char* Intern::NonExistentFormExceptiom::what() const throw() { return "Form not found!"; }