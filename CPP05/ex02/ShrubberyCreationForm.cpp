/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:54:25 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/18 14:24:48 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("unknown", 145, 137), target("unknown") {
    std::cout << LIGHT_YELLOW << "ShrubberyCreationForm default constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {
    std::cout << LIGHT_YELLOW << "ShrubberyCreationForm parameter constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm", 145, 137), target(other.getTarget()) {
    std::cout << LIGHT_YELLOW << "ShrubberyCreationForm copy constructor called" << RESET << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this != &other) {
        this->target = other.target;
    }
    std::cout << LIGHT_YELLOW << "ShrubberyCreationForm copy assignment operator called" << RESET << std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << LIGHT_YELLOW << "ShrubberyCreationForm destructor called" << RESET << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const { return this->target; }

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
    if (!this->getIsSigned()) {
        throw GradeTooLowException();
    }
    if (executor.getGrade() > getGradeToExecute()) {
        throw GradeTooLowException();   
    }
    
    std::string filename = target + "_shrubbery";  //CREATE FILENAME
    std::ofstream outfile(filename.c_str()); // OPEN FILE (c++98 must have .c_str())
    
    if (!outfile) {
        std::cerr << "ERROR: Could not create file "  << filename << std::endl; 
        return ;
    }
    
    outfile << "               ,@@@@@@@,              \n"
            << "       ,,,.   ,@@@@@@/@@,  .oo8888o.  \n"
            << "    ,&%%&%&&%,@@@@@/@@@@@@,8888/88/8o \n"
            << "   ,%&8%&&%&&%,@@@@@@/@@@88/88888/88'\n"
            << "  %&&%&%&/%&&%@@@@/ /@@@88888/8888' \n"
            << "  %&&%/ %&%%&&@@| V /@@' `88/ `/88'  \n" 
            << "  `&%9| ` /%&    |.|         |'|8'    \n"
            << "      |o|        | |         | |      \n"
            << "      |.|        | |         | |      \n"
            << "    \\/ .|_//_/__/  |_//__   /. |_//_ \n";
    
    outfile.close(); //close file
    std::cout << LIGHT_YELLOW << "Shrubbery file '" << filename << "' created succesfully!" << std::endl;
}