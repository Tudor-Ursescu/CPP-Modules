/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:49:17 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/04 16:47:14 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {
    std::cout << type << " created\n";
}

Weapon::~Weapon()
{
    std::cout << type << " destroied\n";    
}

void Weapon::setType(const std::string& newType ) {
    type = newType;
}

const std::string& Weapon::getType() const {
    return (type);
}