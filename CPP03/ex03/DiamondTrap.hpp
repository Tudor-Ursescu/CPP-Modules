/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:18:50 by turescu           #+#    #+#             */
/*   Updated: 2025/02/28 13:02:09 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap( const std::string& name );
    DiamondTrap( const DiamondTrap& other );
    DiamondTrap& operator = (const DiamondTrap& other);
    ~DiamondTrap();
    void attack(const std::string& target);
    void whoAmI();
    int getHealth() const;
    int getEnergy() const;
    int getDamage() const;
};
#endif