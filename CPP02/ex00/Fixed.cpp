/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:15:41 by turescu           #+#    #+#             */
/*   Updated: 2025/02/24 12:45:08 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : val(0) {
    std::cout << BLUE << "Default constructor called" << RESET << '\n';
}

Fixed::Fixed(const Fixed& copy) : val(copy.val) {
    std::cout << BLUE << "Copy constructor called" << RESET << '\n';
}

Fixed& Fixed::operator =( const Fixed& copy ) { 
    if (this != &copy) //to prevent self assignment
    {
        this->val = copy.val;
    }
    std::cout << YELLOW << "Copy assignment operator called" << RESET << '\n';
    return (*this);
}

Fixed::~Fixed() {
    std::cout << RED << "Destructor called\n"; 
}

int Fixed::getRawBits() const {
    std::cout << CYAN << "getRawBits member function called" << RESET << '\n';
    return (val);
}

void Fixed::setRawBits(int const raw) {
    this->val = raw;
}