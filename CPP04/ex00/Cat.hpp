/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 21:11:16 by turescu           #+#    #+#             */
/*   Updated: 2025/02/22 11:27:16 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{
public:
    Cat();
    Cat(const std::string& type);
    Cat(const Cat& other);
    Cat& operator= (const Cat& other);
    ~Cat();
    void makeSound(void) const;
};

#endif