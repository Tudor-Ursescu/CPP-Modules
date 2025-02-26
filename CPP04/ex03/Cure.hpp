/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:16:18 by turescu           #+#    #+#             */
/*   Updated: 2025/02/26 12:27:43 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef CURE_HPP
# define CURE_HPP

# include "Ice.hpp"

class ICharacter;

class Cure : public AMateria {
public:
    Cure();
    Cure(const std::string& type);
    Cure(const Cure& other);
    Cure& operator = (const Cure& other);
    ~Cure();
    void use(ICharacter &target);
    Cure* clone() const;
};

#endif