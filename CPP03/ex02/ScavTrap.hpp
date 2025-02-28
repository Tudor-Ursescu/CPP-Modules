/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:16:20 by turescu           #+#    #+#             */
/*   Updated: 2025/02/28 12:40:52 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ClapTrap& other);
    void attack(const std::string& target);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();
    void guardGate();
    int getHealth() const;
};

#endif