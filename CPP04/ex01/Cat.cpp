/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 21:39:42 by turescu           #+#    #+#             */
/*   Updated: 2025/02/22 15:49:06 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    this->type = "Cat";
    std::cout << PINK << "Cat default constructor called"  << RESET << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const std::string& type) : Animal(type) {
    this->type = "Cat";
    std::cout << PINK << "Cat parameter constructor called" << RESET << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
    this->type = other.type;
    std::cout << PINK << "Cat copy constructor called" << RESET << std::endl;
    this->brain = new Brain(*(other.brain)); //deep copy of brain, not shallow , meaning we dont just copy a pointer
}

Cat& Cat::operator = (const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete this->brain; //delete old brain
        this->brain = new Brain(*(other.brain)); // make deep copy of the the brain, not just shallow
    }
    std::cout << PINK << "Cat copy assignment operator called" << RESET << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << PINK << "Cat destructor called" << RESET << std::endl;
    delete this->brain;
}

void Cat::makeSound(void) const{
    std::cout << PINK << "Prrrrrrrrrrrrrrrrrr..." << RESET << std::endl;
}

Brain* Cat::getBrain() const {
    return brain;
}