/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:21:25 by turescu           #+#    #+#             */
/*   Updated: 2025/02/16 15:47:45 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(const ClapTrap& other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();
};
