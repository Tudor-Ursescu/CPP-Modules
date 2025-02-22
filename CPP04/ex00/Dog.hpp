/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 21:15:42 by turescu           #+#    #+#             */
/*   Updated: 2025/02/22 11:47:09 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Cat.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(const std::string& type);
    Dog(const Dog& other);
    Dog& operator= (const Dog& other);
    ~Dog();
    void makeSound(void) const;
};

#endif