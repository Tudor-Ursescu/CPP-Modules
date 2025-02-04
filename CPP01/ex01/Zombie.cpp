/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:27:10 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/04 14:41:41 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


Zombie::Zombie() : name("Unamed") {}

Zombie::Zombie(std::string name) : name(name) {
    std::cout << name << ": is being constructed" << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << ": is being destroyed" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::getName () {
    std::cout << this->name << std::endl;
}
