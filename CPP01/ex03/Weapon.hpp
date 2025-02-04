/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:43:42 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/04 16:32:24 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
private:
    std::string type;
public:
    Weapon(const std::string& type);
    ~Weapon();
    
    const std::string& getType() const;
    void setType(const std::string& newType);
};




#endif