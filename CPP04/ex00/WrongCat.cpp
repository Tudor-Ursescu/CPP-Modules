/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:48:32 by turescu           #+#    #+#             */
/*   Updated: 2025/02/22 12:53:13 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    this->type = "WrongCat";
    std::cout << BLUE << "WrongCat default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const std::string& type) : WrongAnimal(type) {
    this->type = "WrongCat";
    std::cout << BLUE << "WrongCat parameter constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    this->type = other.type;
    std::cout << BLUE << "WrongCat copy constructor called" << RESET << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat& other) {
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    std::cout << BLUE << "WrongCat copy asignment operator called" << RESET << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << BLUE << "WrongCat destructor called" << RESET << std::endl;
}

void WrongCat::makeSound(void) const{
    std::cout << BLUE << "BARK BARK!!" << RESET << std::endl;
}