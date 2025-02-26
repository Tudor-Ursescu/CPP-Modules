/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:40:46 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/26 12:24:52 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
class Character : public ICharacter {
private:
    std::string name;
    AMateria* inventory[4];
    AMateria* garbage[10];
public:
    Character();
    Character(const std::string& name);
    Character(const Character& other);
    Character& operator = (const Character& other);
    ~Character();
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};


#endif