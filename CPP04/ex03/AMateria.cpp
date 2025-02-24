/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 11:59:02 by turescu           #+#    #+#             */
/*   Updated: 2025/02/23 13:17:53 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("Unknown") {
    std::cout << LAVENDER << "AMateria default constructor called" << RESET << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type) {
    std::cout << LAVENDER << "AMateria parameter constructor called" << RESET << std::endl; 
}

AMateria& AMateria:: operator = (const AMateria &other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << LAVENDER << "AMateria copy assignment operator called" << RESET << std::endl;
    return *this;
}

AMateria::~AMateria() {
    std::cout << LAVENDER << "AMateria destructor called" << RESET << std::endl;
}

const std::string& AMateria::getType() const {
    return this->type;    
}

void AMateria::use(ICharacter &target) {
    std::cout << LAVENDER << "This AMateria does nothing" << RESET << std::endl;
}