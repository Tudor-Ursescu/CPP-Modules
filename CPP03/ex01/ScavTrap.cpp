/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:48:36 by turescu           #+#    #+#             */
/*   Updated: 2025/02/28 11:40:09 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


//cannot make constructor with initialisation list, based on the fact that ScavTrap is inheriting
//them from Clap. So first we need to initialize ClapTrap trough the init list, and only 
//after(in the body) we can reinitialize the values.
//!! Ofcourse we can implement a full parameter constructor for Clap that can be passed here
ScavTrap::ScavTrap() : ClapTrap() {
    this->health = 100;
    this->maxHealth = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << BLUE << "ScavTrap default constructor called" << RESET << '\n';
}

// in the copy constructor , we don't need to reinitialize the values, given the fact that
// the base class takes care of that through the copy constructor method
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << BLUE << "ScavTrap copy constructor called" << RESET << '\n';
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->health = 100;
    this->maxHealth = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << BLUE << "ScavTrap parameter constructor called" << RESET << '\n';
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->health = other.health;
        this->maxHealth = other.maxHealth;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    std::cout << TEAL << "ScavTrap copy assignement operator called" << RESET << '\n';
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap " << this->name << " destructor called" << RESET << '\n';
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in GateKeeper mode.\n";
}

void ScavTrap::attack(const std::string &target)
{
    if (!this->energy)
    {
        std::cout << YELLOW << "ScavTrap " << this->name
                  << "'s energy depleted" << RESET << '\n';
        return;
    }
    if (!this->health)
    {
        std::cout << RED << "ScavTrap " << this->name
                  << " cannot attack, because it is dead" << RESET << '\n';
        return;
    }
    this->energy--;
    std::cout << CYAN << "ScavTrap " << this->name << " attacks "
              << target << ", causing " << this->damage
              << " points of damage!" << RESET << '\n';
}

int ScavTrap::getHealth() const {
    return this->health;
}