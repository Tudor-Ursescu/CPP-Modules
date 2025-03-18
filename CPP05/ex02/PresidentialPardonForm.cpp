/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:08:49 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/18 14:11:38 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(), target("unknown") {
    std::cout << CYAN << "PresidentialPardonForm default constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon", 25, 5), target(target) {
    std::cout << CYAN << "PresidentialPardonForm default constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other.getName(), 25, 5), target(other.getTarget()){
    std::cout << CYAN << "PresidentialPardonForm copy constructor called" << RESET << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &form) {
    if (this != &form) { this->target = form.target; }
    std::cout << CYAN << "PresidentialPardonForm copy assignment operator called" << RESET << std::endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << CYAN << "PresidentialPardonForm destructor called" << RESET << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (!getIsSigned()) { 
        throw AForm::GradeTooLowException(); 
    }
    if (executor.getGrade() > getGradeToExecute()) {
        throw AForm::GradeTooLowException(); 
    }
    std::cout << CYAN << this->target << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
}

std::string PresidentialPardonForm::getTarget() const { return this->target; }
