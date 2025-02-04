/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:12:48 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/04 16:55:13 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name(name) , weapon(NULL) {
    std::cout << name << " has been created.\n";
}

HumanB::~HumanB() {
    std::cout << name << " has been destroyed.\n";
}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
    std::cout << name << " has been armed with " << weapon.getType() << '\n';
}

void HumanB::attack() const{
    if (weapon)
        std::cout << name << " attacks with " << weapon->getType() << '\n';
    else
        std::cout << name << " tries to attack, but has no weapon!\n";
}