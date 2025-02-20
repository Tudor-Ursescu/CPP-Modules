/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:16:06 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/18 18:11:46 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
# define DIAMOND_HPP

#include "FragTrap.hpp"

class Diamond : public ScavTrap, public FragTrap {
private:
    std::string name;
public:
    Diamond();
    Diamond(const std::string& name);
    Diamond(const Diamond& other);
    Diamond& operator=(const Diamond& other);
    ~Diamond();
    void whoAmI();
    void attack(const std::string& target);
};

#endif