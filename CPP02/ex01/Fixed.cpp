/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:15:41 by turescu           #+#    #+#             */
/*   Updated: 2025/02/09 14:44:27 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : val(0) {
    std::cout << BLUE << "Default constructor called" << RESET << '\n';
}

Fixed::Fixed(const Fixed& copy) {
    this->val = copy.val;
    std::cout << PINK << "Copy constructor called" << RESET << '\n';
}

Fixed::Fixed(const int value) {
    this->val = value * (1 << fractionalBits);
    std::cout << LIGHT_YELLOW << "Int constructor called" << RESET << '\n';
}

Fixed::Fixed(const float value) {
    this->val = roundf(value * (1 << fractionalBits));
    std::cout << TEAL << "Float constructor called" << RESET << '\n';
}

Fixed& Fixed::operator = ( const Fixed& copy ) { 
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

std::ostream& operator<<(std::ostream& os, const Fixed& other) {
    os << other.toFloat();
    return os;
}

int Fixed::toInt() const { return (this->val) / (1 << this->fractionalBits); }

float Fixed::toFloat() const { return static_cast<float>(this->val) / (1 << this->fractionalBits); }

int Fixed::getRawBits() const {
    std::cout << CYAN << "getRawBits member function called" << RESET << '\n';
    return (val);
}

void Fixed::setRawBits(int const raw) {
    this->val = raw;
}