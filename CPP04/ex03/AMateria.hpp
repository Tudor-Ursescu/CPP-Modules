/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 11:26:57 by turescu           #+#    #+#             */
/*   Updated: 2025/02/23 14:04:55 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <iomanip>
# include <cmath>
# include <string>
# include "ICharacter.hpp"

# define RED "\033[31m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define PINK "\033[38;5;205m"
# define TEAL "\033[38;5;30m"
# define LAVENDER "\033[38;5;183m"
# define CYAN "\033[38;5;51m"
# define LIGHT_YELLOW "\033[38;5;229m"
# define DEEP_GREEN "\033[38;5;22m"
# define RESET "\033[0m"


class AMateria {
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria& operator = (const AMateria& other);
    virtual ~AMateria();
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0; // no need to define this one in the amateria.cpp, it is pure virtual so it will
                                         // most probably will be used strctly by the subclasses
    virtual void use(ICharacter& target);
};

#endif