/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:07:54 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/17 20:16:59 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <iomanip>
# include "AForm.hpp"

# define RED "\033[31m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define PINK "\033[38;5;205m"
# define TEAL "\033[38;5;30m"
# define LAVENDER "\033[38;5;183m"
# define CYAN "\033[38;5;51m"
# define LIGHT_YELLOW "\033[38;5;229m"
# define DEEP_GREEN "\033[38;5;22m"
# define RESET "\033[0m"


class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator = (const Bureaucrat& other);
    ~Bureaucrat();
    class GradeTooHighException : public std::exception {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char *what() const throw();
    };
    std::string getName() const;
    int getGrade() const;
    void incrementGrade(int n);
    void decrementGrade(int n);
    void signForm(AForm& form);
    void executeForm(const AForm& form);
};


std::ostream& operator<<(std::ostream& out, const Bureaucrat& other);

#endif