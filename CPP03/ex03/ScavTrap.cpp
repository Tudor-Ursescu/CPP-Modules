/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:48:36 by turescu           #+#    #+#             */
/*   Updated: 2025/02/20 18:06:49 by turescu          ###   ########.fr       */
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
    std::cout << RED << "ScavTrap copy constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->health = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << RED << "ScavTrap parameter constructor called" << RESET << std::endl;
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
    std::cout << RED << "ScavTrap copy assignement operator called" << RESET << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap destructor called" << RESET << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << RED << this->name << " is now in GateKeeper mode." << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (!this->energy)
    {
        std::cout << RED << this->name << "'s energy depleted" << RESET << std::endl;
        return;
    }
    if (!this->health)
    {
        std::cout << RED << this->name << " cannot attack, because it is dead" << RESET << std::endl;
        return;
    }
    this->energy--;
    std::cout << RED << this->name << " attacks "
              << target << ", causing " << this->damage
              << " points of damage!" << RESET << std::endl;
}
