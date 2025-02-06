/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:59:29 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/06 12:18:40 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {
    std::cout << BLUE << name << " has been created with a " << weapon.getType() << " as their weapon" << RESET << '\n';
};

HumanA::~HumanA() {
    std::cout <<RED << name << " has been destroyed" << RESET << '\n';
};

void HumanA::attack() const{
    std::cout << name << " attacks with " << weapon.getType() << '\n';
}