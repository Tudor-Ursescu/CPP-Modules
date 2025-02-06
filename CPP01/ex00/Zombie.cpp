/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:23:43 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/06 12:25:20 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name) : name(name) {
    std::cout << BLUE << name << ": is being constructed" << RESET << std::endl;
}

Zombie::~Zombie() {
    std::cout << RED << name << ": is being destroyed" << RESET << std::endl;
}

void Zombie::announce(void) {
    std::cout << YELLOW << name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}