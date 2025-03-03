/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 21:00:15 by turescu           #+#    #+#             */
/*   Updated: 2025/03/03 08:48:35 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << RED << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(const std::string& type) : type("Animal") {
    (void)type; // in this particular subject, we need to hold a general type for the base class
    std::cout << RED << "Animal parameter constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << RED << "Animal copy constructor called" << RESET << std::endl;
}

Animal& Animal::operator= (const Animal& other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << RED << "Animal copy assignment operator called" << RESET << std::endl;
    return *this;
}

 Animal::~Animal() {
    std::cout << RED << "Animal destructor called" << RESET << std::endl;
}

void Animal::makeSound(void) const{
    std::cout << RED << "Loud screeching noise" << RESET << std::endl;
}

std::string Animal::getType(void) const{
    return this->type;
}