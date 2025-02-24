/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:16:18 by turescu           #+#    #+#             */
/*   Updated: 2025/02/23 14:18:33 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "Ice.hpp"

class Cure : public AMateria {
public:
    Cure();
    Cure(const std::string& type);
    Cure(const Cure& other);
    Cure& operator = (const Cure& other);
    ~Cure();
    void use(ICharacter &target);
    AMateria* clone() const;
};

#endif