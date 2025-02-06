/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:43:42 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/06 12:13:42 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

# define RED "\033[31m"
# define BLUE "\033[34m"
# define RESET "\033[0m"
# define YELLOW "\033[33m"

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