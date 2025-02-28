/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:34:49 by turescu           #+#    #+#             */
/*   Updated: 2025/02/28 12:42:56 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unknown"), health(10), maxHealth(10), energy(10), damage(0) {
    std::cout << LAVENDER << "ClapTrap default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), health(10), energy(10), damage(0) {
    std::cout << TEAL << "ClapTrap parameter constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), health(other.health), maxHealth(10), energy(other.energy), damage(other.damage){
    std::cout << PINK << "ClapTrap copy constructor called" << RESET << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& other) {
    if (this != &other) {
        this->name = other.name;
        this->health = other.health;
        this->maxHealth = other.maxHealth;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    std::cout << BLUE << "ClapTrap copy assignement operator called" << RESET << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << RED << "ClapTrap " << this->name << " destructor called" << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (!this->energy) {
        std::cout << YELLOW << "ClapTrap " << this->name
                  << "'s energy depleted" << RESET << '\n';
        return ;
    }
    if (!this->health){
        std::cout << RED << "ClapTrap " << this->name
                  << " cannot attack, because it is dead" << RESET << '\n';
        return ;
    }
    this->energy--;
    std::cout << CYAN << "ClapTrap "<< this->name << " attacks "
              << target << ", causing " << this->damage
              << " points of damage!" << RESET << '\n';
}
void ClapTrap::takeDamage(unsigned int amount) {
    if (!this->health){
        std::cout << this->name << " is already dead!" << '\n';
        return ;
    }
    if (this->health > amount) {
        this->health -= amount;
        std::cout << LIGHT_YELLOW << this->name << " suffered "
                  << amount << " points of damage, remaining with " << this->health
                  << " points of health" << RESET <<'\n';
    }
    else {
        this->health = 0;
        std::cout << RED <<  this->name << " died from the damage" << RESET << '\n';
        return ;
    }
}
void ClapTrap::beRepaired(unsigned int amount) {
    if (!this->energy) {
        std::cout << this->name << " has no more energy for repairs...\n";
        return ;
    }
    if (!this->health) {
        std::cout << this->name << " cannot be repaired. It is dead..." << RESET << '\n';
        return ; 
    }
    else if (this->health == this->maxHealth) {
        std::cout << this->name << " does not need any repairs.\n";
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
            if (this->health == this->maxHealth) {
                std::cout << BLUE << this->name 
                          << " has been fully repaired" << RESET << '\n';
            }
            else {
                std::cout << BLUE << this->name
                          << " has recieved " << amount << " points of health back!"
                          << RESET << '\n';  
            }
        }
    }
}