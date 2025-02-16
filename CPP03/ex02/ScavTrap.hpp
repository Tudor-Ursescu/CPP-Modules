/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:16:20 by turescu           #+#    #+#             */
/*   Updated: 2025/02/16 15:37:23 by turescu          ###   ########.fr       */
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
};

#endif