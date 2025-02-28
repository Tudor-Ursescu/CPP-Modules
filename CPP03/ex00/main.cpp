/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:49:34 by turescu           #+#    #+#             */
/*   Updated: 2025/02/28 11:05:21 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    {
        ClapTrap B("Bobby");
        B.attack("Jhony");
        B.attack("Jhony");
        B.attack("Jhony");
        B.attack("Jhony");
        B.attack("Jhony");
        B.attack("Jhony");
        B.attack("Jhony");
        B.attack("Jhony");
        B.takeDamage(6);
        B.beRepaired(1);
        B.beRepaired(1);
        B.beRepaired(1);
        ClapTrap C("Collin");
        C.takeDamage(10);
        C.attack("Edd");
        C.beRepaired(4);
        ClapTrap();
    }
    
    return 0;
}