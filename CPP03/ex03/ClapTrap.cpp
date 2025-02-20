/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:34:49 by turescu           #+#    #+#             */
/*   Updated: 2025/02/20 18:04:20 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unknown"), health(10), energy(10), damage(0) {
    std::cout << TEAL << "ClapTrap " << this->name  << " default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), health(10), energy(10), damage(0) {
    std::cout << TEAL << "ClapTrap " << this->name << " parameter constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), health(other.health), energy(other.energy), damage(other.damage){
    std::cout << TEAL << "ClapTrap " << this->name << " copy constructor called" << RESET << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& other) {
    if (this != &other) {
        this->name = other.name;
        this->health = other.health;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    std::cout << BLUE << "ClapTrap " << this->name << " copy assignement operator called" << RESET << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << TEAL << "ClapTrap " << this->name << " destructor called" << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (!this->energy) {
        std::cout << TEAL << this->name
                  << "'s energy depleted" << RESET << std::endl;
        return ;
    }
    if (!this->health){
        std::cout << TEAL << this->name
                  << " cannot attack, because it is dead" << RESET << std::endl;
        return ;
    }
    this->energy--;
    std::cout << TEAL << this->name << " attacks "
              << target << ", causing " << this->damage
              << " points of damage!" << RESET << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
    if (!this->health){
        std::cout<< TEAL << this->name << " is already dead!" << RESET << std::endl;
        return ;
    }
    if (this->health > amount) {
        this->health -= amount;
        std::cout << TEAL << this->name << " suffered "
                  << amount << " points of damage, remaining with " << this->health
                  << " points of health" << RESET << std::endl;
    }
    else {
        this->health = 0;
        std::cout << TEAL << this->name << " died from the damage" << RESET << std::endl;
        return ;
    }
}
void ClapTrap::getRepaired(unsigned int amount) {
    if (!this->energy) {
        std::cout << TEAL << this->name << " has no more energy for repairs..." << RESET << std::endl;
        return ;
    }
    if (!this->health) {
        std::cout << TEAL << this->name << " cannot be repaired. It is dead..." << RESET << std::endl;
        return ; 
    }
    else if (this->health == 10) {
        std::cout << TEAL << this->name << " does not need any repairs." << RESET << std::endl;
        return ;
    }
    else{
        if (amount == 0) {
            std::cout << TEAL << this->name << " 404 REPAIR PARTS NOT FOUND" << RESET << std::endl;
            return ;
        }
        else {
            this->energy--;
            this->health += amount;
            if (this->health == 10) {
                std::cout << TEAL << this->name 
                          << " has been fully repaired" << RESET << std::endl;
            }
            else {
                std::cout << TEAL << this->name
                          << " has recieved " << amount << " points of health back!"
                          << RESET << std::endl;  
            }
        }
    }
}
