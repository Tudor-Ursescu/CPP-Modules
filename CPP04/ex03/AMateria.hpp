/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 11:26:57 by turescu           #+#    #+#             */
/*   Updated: 2025/02/25 13:44:24 by tursescu         ###   ########.fr       */
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
    AMateria(const AMateria& other);
    AMateria& operator = (const AMateria& other);//don't know if i need this.. strictly following 
    virtual ~AMateria();                         //rule of implementing all classes in OCF(must check rules again)
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0; //-no need to define this one in the amateria.cpp, it is pure virtual so it will
                                         // it will be used strctly by the subclasses
    virtual void use(ICharacter& target);
};

#endif