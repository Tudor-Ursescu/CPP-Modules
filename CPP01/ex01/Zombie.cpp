/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:27:10 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/06 12:22:16 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


Zombie::Zombie() : name("Unamed") {
    std::cout << BLUE<< "Default constructor called" << RESET << '\n';
}

Zombie::Zombie(std::string name) : name(name) {
    std::cout << BLUE << name << ": is being constructed" << RESET << std::endl;
}

Zombie::~Zombie() {
    std::cout << RED << name << ": is being destroyed" << RESET << std::endl;
}

void Zombie::announce(void) {
    std::cout << YELLOW << name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::getName () {
    std::cout << this->name << std::endl;
}
