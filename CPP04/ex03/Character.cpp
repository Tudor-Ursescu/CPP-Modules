/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:24:36 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/25 16:03:21 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Unknown"){
    std::cout << YELLOW << "Character default constructor called" << RESET << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    for (int i = 0; i < 10; i++)
        garbage[i] = NULL;
}

Character::Character(const std::string& const name) : name(name){
    std::cout << YELLOW << "Character parameter constructor called" << RESET << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    for (int i = 0; i < 10; i++)
        garbage[i] = NULL;
}

Character::Character(const Character& other) : name(other.getName()) {
    for (int i = 0; i < 4; i++) {
        if (other.inventory[i]) {
            this->inventory[i] = other.inventory[i]->clone();
        }
        else {
            this->inventory[i] = NULL; 
        }
    }
    for (int i = 0; i < 10; i++) {
        this->garbage[i] = NULL;
    }
    std::cout << YELLOW << "Character copy constructor called" << RESET << std::endl;
}

Character& Character::operator = (const Character& other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            if (this->inventory[i]) {
                this->inventory[i] = NULL;
            }
        }
        this->name = other.getName();
        for (int i = 0; i < 4; i++) {
            if (other.inventory[i]) {
                this->inventory[i] = other.inventory[i]->clone();
            }
        }
        for (int i = 0; i < 10; i++) {
            this->garbage[i] = NULL;
        }
    }
    std::cout << YELLOW << "Character copy assignment operator called" << RESET << std::endl;
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (inventory[i]) {
            delete inventory[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        if (garbage[i]) {
            delete garbage[i];
        }
    } 
    //No need for deletion from the character. the char only handles pointers of those Materias
    // the deletion of those materias should be handled by the owner (MateriaSource)
    // OR SO I BELIEVED;
    std::cout << YELLOW << "Character destructor called" << RESET << std::endl;
}

std::string const& Character::getName() const {
    return this->name;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; i++) {
        if(!inventory[i]) {
            inventory[i] = m;
            return;
        }
        else {
            continue;
        }
    }
}
void Character::unequip(int idx) {
    if (idx < 0 || idx > 3) {
        std::cout << YELLOW << "Invalid inventory index" << RESET << std::endl;
        return ;
    }
    int i = 0;
    while (i < 10) {
        if (!garbage[i]) {
            break;
        }
        i++;
    }
    if (inventory[idx]) {
        garbage[i] = inventory[idx];
        inventory[idx] = NULL;
    }
    else {
        std::cout << YELLOW << "The inventory slot at this index is already empty" << RESET << std::endl;
        return ;
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 0 || idx > 3) {
        std::cout << YELLOW << "Invalid inventory index" << RESET << std::endl;
        return ;
    }
    if (!this->inventory[idx]) {
        std::cout << YELLOW << "There is no Materia equipped in this inventory slot" << RESET << std::endl;
        return ;
    }
    std::cout << YELLOW << "Character " << this->name << " " << RESET;
    this->inventory[idx]->use(target);
}