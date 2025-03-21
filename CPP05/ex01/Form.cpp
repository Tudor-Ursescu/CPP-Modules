/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:20:03 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/17 19:04:06 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Unknown"), isSigned(false), gradeToSign(50), gradeToExecute(10) {
    std::cout << YELLOW << this->name << " default constructor called" << RESET << std::endl;
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw GradeTooHighException();
    }
    if (gradeToSign > 150 || gradeToExecute > 150) {
        throw GradeTooLowException();
    }
    std::cout << YELLOW << this->name << " parameter constructor called" << RESET << std::endl;
}

Form::Form(const Form &other) : name(other.name), isSigned(false), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {
    std::cout << YELLOW << this->name << " copy constructor called" << RESET << std::endl;
}

Form& Form::operator=(const Form &other) {
    if (this != &other) {
        this->isSigned = other.isSigned;
    }
    return *this;
    std::cout << YELLOW << this->name << " copy assignment operator called" << RESET << std::endl;
}
Form::~Form() {
    std::cout << YELLOW << this->name << " destructor called" << RESET << std::endl;
}

std::string Form::getName() const { return this->name; }

bool Form::getIsSigned() const { return isSigned; }
  
int Form::getGradeToSign() const { return gradeToSign; }

int Form::getGradeToExecute() const { return gradeToExecute; }

void Form::beSigned(const Bureaucrat &other) {
    if ( other.getGrade() > this->gradeToSign) { throw GradeTooLowException(); }
    this->isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() { return "grade is too high for form" ;}

const char* Form::GradeTooLowException::what() const throw() { return "grade is too low for form" ;}


std::ostream& operator<<(std::ostream& out, const Form& form) {
    out << YELLOW << "Name: " << form.getName() << ", Grade needed to sign : " << form.getGradeToSign() << ", Grade needed to execute: " << form.getGradeToExecute() <<  RESET << std::endl;
    return out;
}