/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:55:54 by turescu           #+#    #+#             */
/*   Updated: 2025/03/03 09:47:40 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <iomanip>
# include <cmath>
# include <string>
# include "Brain.hpp"

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

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const std::string& other);
    Animal(const Animal& other);
    Animal& operator= (const Animal& other);
    virtual ~Animal(); //not using the virtual destructor might cause undefinde behavior
                       // if we don't virtualize the destructor, it will be called when we intend
                       //to destroy a inherited class, letting that inherited class's resources leak
    virtual void makeSound(void) const;
    std::string getType(void) const;
};  


Animal**    animalZoo( int N );
void        freeZoo(Animal **zoo, int N);

#endif