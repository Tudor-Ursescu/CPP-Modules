/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:19:29 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/26 12:40:26 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout << PINK << "MateriaSource default constructor called" << RESET << std::endl;
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    for (int i = 0; i < 4; i++) {
        if (other.inventory[i]) {
            this->inventory[i] = other.inventory[i]->clone();
        }
        else {
            this->inventory[i] = NULL; 
        }
    }
    std::cout << PINK << "MateriaSource copy constructor called" << RESET << std::endl;
}

MateriaSource& MateriaSource::operator = (const MateriaSource& other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            this->inventory[i] = NULL;
        }
        for(int i = 0; i < 4; i++) {
            this->inventory[i] = other.inventory[i]->clone();
        }
    }
    std::cout << PINK << "MateriaSource copy assignment operator called" << RESET << std::endl;
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i]) {
            delete inventory[i];
        }
    }
    std::cout << PINK << "MateriaSource destructor called" << RESET << std::endl;
}

void MateriaSource::learnMateria(AMateria *m) {
    if (m == NULL) {
        std::cout << PINK << "Cannot learn this, the Materia doesn't exist" << RESET << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (!this->inventory[i]) {
            this->inventory[i] = m->clone(); // deep copy of the materia
            std::cout << "Materia " << m->getType() << " learned" << RESET << std::endl;
            return ;
        }
        std::cout << "Cannot learn any more Materias" << RESET << std::endl;
    }
}

AMateria* MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i]->getType() == type) {
            return this->inventory[i]->clone();
        }
    }
    std::cout << "PINK" << "MateriaSource hasn't learned this Materia" << RESET << std::endl;
    return NULL;
}