/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:16:20 by turescu           #+#    #+#             */
/*   Updated: 2025/02/28 11:32:20 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& other);
    void attack(const std::string&target);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();
    int getHealth() const;
    void guardGate();
};

//in order for ScavTrap to publicly inherit from ClapTrap we declare the class with public ClapTrap.

#endif