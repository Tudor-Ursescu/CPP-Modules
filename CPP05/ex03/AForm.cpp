/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:20:03 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/18 13:41:16 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Unknown"), isSigned(false), gradeToSign(150), gradeToExecute(150) {
    std::cout << YELLOW << this->name << " default constructor called" << RESET << std::endl;
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw GradeTooHighException();
    }
    if (gradeToSign > 150 || gradeToExecute > 150) {
        throw GradeTooLowException();
    }
    std::cout << YELLOW << this->name << " parameter constructor called" << RESET << std::endl;
}

AForm::AForm(const AForm &other) : name(other.name), isSigned(false), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {
    std::cout << YELLOW << this->name << " copy constructor called" << RESET << std::endl;
}

AForm& AForm::operator=(const AForm &other) {
    if (this != &other) {
        this->isSigned = other.isSigned;
    }
    return *this;
    std::cout << YELLOW << this->name << " copy assignment operator called" << RESET << std::endl;
}
AForm::~AForm() {
    std::cout << YELLOW << this->name << " destructor called" << RESET << std::endl;
}

std::string AForm::getName() const { return this->name; }

bool AForm::getIsSigned() const { return this->isSigned; }
  
int AForm::getGradeToSign() const { return this->gradeToSign; }

int AForm::getGradeToExecute() const { return this->gradeToExecute; }

void AForm::beSigned(const Bureaucrat &other) {
    if ( other.getGrade() > this->gradeToSign) { throw GradeTooLowException(); }
    this->isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw() { return "Grade is too high for form" ;}

const char* AForm::GradeTooLowException::what() const throw() { return "Grade is too low for form" ;}


std::ostream& operator<<(std::ostream& out, const AForm& form) {
    out << YELLOW << "Name: " << form.getName() << ", Grade needed to sign : " << form.getGradeToSign() << ", Grade needed to execute: " << form.getGradeToExecute() <<  RESET << std::endl;
    return out;
}