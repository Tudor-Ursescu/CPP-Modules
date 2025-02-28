/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:42:10 by turescu           #+#    #+#             */
/*   Updated: 2025/02/28 13:01:41 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unknown_clap_name"), ScavTrap(), FragTrap(), name("unknown") {
    this->health = FragTrap::health;
    this->energy = ScavTrap::energy;
    this->damage = FragTrap::damage;
    std::cout << PINK << "DiamondTrap " << this->name << " default constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {
    this->health = FragTrap::health;
    this->energy = ScavTrap::energy;
    this->damage = FragTrap::damage;
    std::cout << PINK << "DiamondTrap " << this->name << " parameter constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ) : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name) {        
    std::cout << PINK << "DiamondTrap " << this->name << " copy constructor called" << RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& other) {
    if (this != &other)
    {
        ClapTrap::operator=(other);
        this->name = other.name;
        this->health = other.health;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    std::cout << PINK << "DiamondTrap " << this->name << "copy assignment operator called" << RESET << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << PINK << "DiamondTrap " << this->name << " destructor called" << RESET << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI(void) {
    std::cout << PINK << "My name is : " << this->name << ", and my ancestor is : " << ClapTrap::name << RESET << std::endl;
}

int DiamondTrap::getHealth() const { return this->health; }
int DiamondTrap::getEnergy() const { return this->energy; }
int DiamondTrap::getDamage() const { return this->damage; }