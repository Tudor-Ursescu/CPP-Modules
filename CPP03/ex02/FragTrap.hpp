/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:21:25 by turescu           #+#    #+#             */
/*   Updated: 2025/02/16 17:06:11 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP
# define FRAGTRAP_CPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const ClapTrap& other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();
    void highFivesGuys(void);
};


#endif