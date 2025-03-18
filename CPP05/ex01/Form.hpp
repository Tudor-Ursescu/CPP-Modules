/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:59:34 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/17 14:28:14 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

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


class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;
public:
    Form();
    Form(const std::string& name, int gradeToSign,  int gradeToExecute);
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(const Bureaucrat& other);
    class GradeTooHighException : public std::exception {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char *what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, const Form& form);


#endif