/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:49:34 by turescu           #+#    #+#             */
/*   Updated: 2025/02/20 20:06:08 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    {
        DiamondTrap t("Tudor");
        t.attack("bad guy");
        t.takeDamage(10);
        t.getRepaired(5);
        t.guardGate();
        t.highFivesGuys();
        t.whoAmI();
    }
    return 0;
}