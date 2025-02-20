/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:47:51 by turescu           #+#    #+#             */
/*   Updated: 2025/02/20 20:04:59 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->health = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << YELLOW << "FragTrap default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    this->health = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << YELLOW << "FragTrap parameter constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const ClapTrap& other) : ClapTrap(other) {
    std::cout << YELLOW << "FragTrap copy constructor called" << RESET << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap& other) {
    if (this != &other) {
        this->name = other.name;
        this->health = other.health;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    std::cout << YELLOW << "FragTrap copy assignment operator called" << RESET << std::endl;  
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << YELLOW << "FragTrap destructor called" << RESET << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << YELLOW << "I am cringe and I want to high five everyboy!" << RESET << std::endl;
}