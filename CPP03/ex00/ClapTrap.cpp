/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:34:49 by turescu           #+#    #+#             */
/*   Updated: 2025/02/28 11:05:03 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unknown"), health(10), energy(10), damage(0) {
    std::cout << LAVENDER << "Default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), health(10), energy(10), damage(0) {
    std::cout << TEAL << "Parameter constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), health(other.health), energy(other.energy), damage(other.damage){
    std::cout << PINK << "Copy constructor called" << RESET << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& other) {
    if (this != &other) {
        this->name = other.name;
        this->health = other.health;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    std::cout << BLUE << "Copy assignement operator called" << RESET << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << RED << name << " Destructor called" << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (!this->energy) {
        std::cout << YELLOW << "ClapTrap " << this->name
                  << "'s energy depleted" << RESET << std::endl;
        return ;
    }
    if (!this->health){
        std::cout << RED << "ClapTrap " << this->name
                  << " cannot attack, because it is dead" << RESET << '\n';
        return ;
    }
    this->energy--;
    std::cout << CYAN << "ClapTrap " << this->name << " attacks "
              << target << ", causing " << this->damage
              << " points of damage!" << RESET << '\n';
}
void ClapTrap::takeDamage(unsigned int amount) {
    if (!this->health){
        std::cout << "ClapTrap " << this->name << " is already dead!" << '\n';
        return ;
    }
    if (this->health > amount) {
        this->health -= amount;
        std::cout << LIGHT_YELLOW << "ClapTrap " << this->name << " suffered "
                  << amount << " points of damage, remaining with " << this->health
                  << " points of health" << RESET <<'\n';
    }
    else {
        this->health = 0;
        std::cout << RED << "ClapTrap " << this->name << " died from the damage" << RESET << '\n';
        return ;
    }
}
void ClapTrap::beRepaired(unsigned int amount) {
    if (!this->energy) {
        std::cout << "ClapTrap " << this->name << " has no more energy for repairs...\n";
        return ;
    }
    if (!this->health) {
        std::cout << "ClapTrap " << this->name << " cannot be repaired. It is dead..." << RESET << '\n';
        return ; 
    }
    else if (this->health == 10) {
        std::cout << "ClapTrap " << this->name << " does not need any repairs.\n";
        return ;
    }
    else{
        if (amount == 0) {
            std::cout << PINK << "404 REPAIR PARTS NOT FOUND" << RESET << '\n';
            return ;
        }
        else {
            this->energy--;
            this->health += amount;
            if (this->health == 10) {
                std::cout << BLUE << "ClapTrap " << this->name 
                          << " has been fully repaired" << RESET << '\n';
            }
            else {
                std::cout << BLUE << "ClapTrap " << this->name
                          << " has recieved " << amount << " points of health back!"
                          << RESET << std::endl;  
            }
        }
    }
}