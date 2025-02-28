/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:49:34 by turescu           #+#    #+#             */
/*   Updated: 2025/02/28 11:43:12 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    {
        ScavTrap B("Buddy");
        B.takeDamage(10);
        B.attack("The President");
        B.guardGate();
        B.takeDamage(80);
        std::cout << "Buddys health = " << B.getHealth() << std::endl;
        B.beRepaired(5);
        std::cout << "Buddys health = " << B.getHealth() << std::endl;
        B.takeDamage(15);
        B.attack("some bear");
    }
    return 0;
}