/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:47:51 by turescu           #+#    #+#             */
/*   Updated: 2025/02/16 17:33:29 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->health = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << "FragTrap " << this->name << " default constructor called\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    this->health = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << "FragTrap " << this->name << " parameter constructor called\n";
}

FragTrap::FragTrap(const ClapTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap " << this->name << " copy constructor called\n";
}

FragTrap& FragTrap::operator = (const FragTrap& other) {
    if (this != &other) {
        this->name = other.name;
        this->health = other.health;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    std::cout << "FragTrap " << this->name << " copy assignment operator called\n";  
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->name << " destructor called\n";
}

void FragTrap::highFivesGuys() {
    std::cout << "I am cringe and i want to high five everyboy!" << std::endl;
}