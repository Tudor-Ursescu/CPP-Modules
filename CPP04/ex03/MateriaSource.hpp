/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:21:21 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/25 15:40:59 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource {
private:
    AMateria* inventory[4];
    bool ice = false;
    bool cure = false;
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource& operator = (const MateriaSource& other);
    ~MateriaSource();
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};


#endif