/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:49:34 by turescu           #+#    #+#             */
/*   Updated: 2025/02/28 13:04:00 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    {
        DiamondTrap t("Tudor");
        std::cout << "Tudor's energy = " << t.getEnergy() << std::endl;
        t.attack("bad guy");
        std::cout << "Tudor's energy = " << t.getEnergy() << std::endl;
        std::cout << "Tudor's health = " << t.getHealth() << std::endl;
        t.takeDamage(10);
        std::cout << "Tudor's health = " << t.getHealth() << std::endl;
        t.beRepaired(5);
        std::cout << "Tudor's health = " << t.getHealth() << std::endl;
        t.guardGate();
        t.highFivesGuys();
        t.whoAmI();
    }
    return 0;
}