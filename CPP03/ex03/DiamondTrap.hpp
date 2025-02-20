/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:18:50 by turescu           #+#    #+#             */
/*   Updated: 2025/02/20 17:17:11 by turescu          ###   ########.fr       */
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
};
#endif