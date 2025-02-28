/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:49:34 by turescu           #+#    #+#             */
/*   Updated: 2025/02/28 12:53:16 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    {
        FragTrap C("Clint");
        C.highFivesGuys();
        std::cout << "Guss's health = " << C.getHealth() << std::endl;
        C.beRepaired(10);
        
        std::cout << "Guss's health = " << C.getHealth() << std::endl;
    }
    return 0;
}