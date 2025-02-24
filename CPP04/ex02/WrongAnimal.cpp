/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:44:57 by turescu           #+#    #+#             */
/*   Updated: 2025/02/22 11:45:34 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << RED << "WrongAnimal default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type("WrongAnimal") {
    (void)type;
    std::cout << RED << "WrongAnimal parameter constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << RED << "WrongAnimal copy constructor called" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << RED << "WrongAnimal copy assignment operator called" << RESET << std::endl;
    return *this;
}

 WrongAnimal::~WrongAnimal() {
    std::cout << RED << "WrongAnimal destructor called" << RESET << std::endl;
}

void WrongAnimal::makeSound(void) const{
    std::cout << RED << "Loud screeching noise" << RESET << std::endl;
}

std::string WrongAnimal::getType(void) const{
    return this->type;
}