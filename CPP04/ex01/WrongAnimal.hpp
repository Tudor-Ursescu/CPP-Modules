/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:42:02 by turescu           #+#    #+#             */
/*   Updated: 2025/03/03 08:26:30 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "Animal.hpp"

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const std::string& other);
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator= (const WrongAnimal& other);
    virtual ~WrongAnimal();
    void makeSound(void) const;
    std::string getType(void) const;
};  

#endif