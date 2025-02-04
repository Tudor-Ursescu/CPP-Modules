/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:59:29 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/04 16:48:00 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {
    std::cout << name << " has been created with a " << weapon.getType() << "as their weapon\n";
};

HumanA::~HumanA() {
    std::cout << name << " has been destroyed\n";
};

void HumanA::attack() const{
    std::cout << name << " attacks with " << weapon.getType() << '\n';
}