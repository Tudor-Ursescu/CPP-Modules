/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:07:56 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/12 17:55:53 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unknown"), grade(150){
    std::cout << DEEP_GREEN << this->name << " default constructor called" <<  RESET << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade){
    if (this->grade < 1) {
        throw GradeTooHigh();
    }
    else if (this->grade > 150) {
        throw GradeTooLow();
    }
    std::cout << DEEP_GREEN << this->name << " parameter constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.getName()), grade(other.getGrade()) {
    if (this->grade < 1) {
        throw GradeTooHigh();
    }
    else if (this->grade > 150) {
        throw GradeTooLow();
    }
    std::cout << DEEP_GREEN << this->name << " copy constructor called" << RESET << std::endl; 
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& other) {
    if (this != &other) {
        this->grade = other.grade;
    }
    std::cout << DEEP_GREEN << this->name << " copy assignment operator called" << RESET << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << this->name << " destructor called" << RESET << std::endl;
}

std::string Bureaucrat::getName() const { return this->name; }

int Bureaucrat::getGrade() const { return this->grade; }


void Bureaucrat::incrementGrade(int n) {
    if (n < 0) {
        std::cout << LAVENDER << "Invalid value entered. Try a pozitive number" << RESET << std::endl;
        return ;
    }
    std::cout << TEAL << "Incrementing the grade from " << BLUE << grade << TEAL << " to " << YELLOW << grade - n << RESET <<std::endl;
    if (grade - n < 1) {
        throw GradeTooHigh();
    }
    grade -= n;
}

void Bureaucrat::decrementGrade(int n) {
    if (n < 0) {
        std::cout << LAVENDER << "Invalid value entered. Try a pozitive number" << RESET << std::endl;
        return ;
    }
    std::cout << TEAL << "Decrementing the grade from " << BLUE << grade << TEAL << " to " << YELLOW << grade + n << RESET <<std::endl;
    if (grade + n > 150) {
        throw GradeTooLow();
    }
    grade += n;
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& other) {
    out << DEEP_GREEN << other.getName() << ", bureaucrat grade " << other.getGrade() << "." << RESET;
    return out;
}

const char * Bureaucrat::GradeTooHigh::what() const throw() {
    return "Grade is too high!";
}

const char * Bureaucrat::GradeTooLow::what() const throw() {
    return "Grade is too low!";
}