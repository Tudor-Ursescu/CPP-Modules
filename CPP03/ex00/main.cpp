/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:49:34 by turescu           #+#    #+#             */
/*   Updated: 2025/02/16 13:07:24 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    // {
    //     ClapTrap B("Bobby");
    //     B.attack("Jhony");
    //     B.attack("Jhony");
    //     B.attack("Jhony");
    //     B.attack("Jhony");
    //     B.attack("Jhony");
    //     B.attack("Jhony");
    //     B.attack("Jhony");
    //     B.attack("Jhony");
        
    //     B.takeDamage(6);
    //     B.getRepaired(1);
    //     B.getRepaired(1);
    //     B.getRepaired(1);
    // }
    {
        ClapTrap C("Collin");
        C.takeDamage(10);
        C.attack("Edd");
        C.getRepaired(4);
    }
    
    return 0;
}