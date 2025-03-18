/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:06:20 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/18 17:45:50 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("unknown") {
    std::cout << BLUE << "RobotomyRequestForm default constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("robotomy request", 72, 45), target(target) {
    std::cout << BLUE << "RobotomyRequestForm parameter constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), target(other.getTarget()) {
    std::cout << BLUE << "RobotomyRequestForm copy constructor called" << RESET << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    if (this != &other) {
        this->target = other.target;
    }
    std::cout << BLUE << "RobotomyRequestForm copy assignment operator called" << RESET << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << BLUE << "RobotomyRequestForm destructor called" << RESET << std::endl;
}

std::string RobotomyRequestForm::getTarget() const { return this->target; }

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned()) {
        throw GradeTooLowException();
    }
    if (executor.getGrade() > getGradeToExecute()) {
        throw GradeTooLowException();
    }
    std::cout << RED << "*****DRILLING NOISES*****   " << PINK << this->target << BLUE << " has been successfully robotomized 50% of the time" << RESET << std::endl;
}