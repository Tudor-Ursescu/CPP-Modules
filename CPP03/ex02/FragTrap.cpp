/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:47:51 by turescu           #+#    #+#             */
/*   Updated: 2025/02/16 16:19:35 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->health = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << "FragTrap " << this->name << " default constructor called\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)