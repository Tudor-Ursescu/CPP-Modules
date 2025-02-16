/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:48:36 by turescu           #+#    #+#             */
/*   Updated: 2025/02/16 15:16:48 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->health = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << BLUE << "ScavTrap default constructor called" << RESET << '\n';
}

ScavTrap::ScavTrap(const ClapTrap &other) : ClapTrap(other)
{
    std::cout << BLUE << "ScavTrap copy constructor called" << RESET << '\n';
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->health = 100;
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
