/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:07:54 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/17 12:05:15 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

#define RED "\033[31m"
#define BLUE "\033[34m"
#define YELLOW "\033[33m"
#define PINK "\033[38;5;205m"
#define TEAL "\033[38;5;30m"
#define LAVENDER "\033[38;5;183m"
#define CYAN "\033[38;5;51m"
#define LIGHT_YELLOW "\033[38;5;229m"
#define DEEP_GREEN "\033[38;5;22m"
#define RESET "\033[0m"

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();
    //std::exception is a base class for all standard exceptions in C++;
    //std::exception provides the function what() that returns a msg describing the exception;
    //we publicly inherit from std::exception to create our own custom exception classes.
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    std::string getName() const;
    int getGrade() const;
    void incrementGrade(int n);
    void decrementGrade(int n);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &other);

#endif



//50: -the method returns a pointer to a constant char string (const char *)
//    -the method what() is inherited from std::exception;
//    -the second const shows that the function does not modify the object
//    -throw() is a DYNAMIC EXCEPTION SPECIFICATION/THROW SPECIFICATION
//     (old C++ way of saying "this funciton does not throw any exceptions")
//For modern C++: const char *what() const noexcept;
//For C++98 : like we did it, or even without throw(): const char* what() const;

//TL;DR :  *if throw() is at the end of a method, it doesn't mean "throw something",
//          it means "i promise not to throw anything"