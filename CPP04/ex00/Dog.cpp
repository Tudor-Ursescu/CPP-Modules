/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 21:20:33 by turescu           #+#    #+#             */
/*   Updated: 2025/02/22 11:11:27 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal() {
    this->type = "Dog";
    std::cout << BLUE << "Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(const std::string& type) : Animal(type) {
    this->type = "Dog";
    std::cout << BLUE << "Dog parameter constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    this->type = other.type;
    std::cout << BLUE << "Dog copy constructor called" << RESET << std::endl;
}

Dog& Dog::operator = (const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << BLUE << "Dog copy asignment operator called" << RESET << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << BLUE << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound(void) const{
    std::cout << BLUE << "BARK BARK!!" << RESET << std::endl;
}