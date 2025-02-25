/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:15:41 by turescu           #+#    #+#             */
/*   Updated: 2025/02/24 13:33:08 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : val(0) {
    std::cout << BLUE << "Default constructor called" << RESET << '\n';
}

Fixed::Fixed(const Fixed& other) {
    this->val = other.val;
    std::cout << PINK << "Copy constructor called" << RESET << '\n';
}

/*This constructor takes the int value and shifts it 8 bits to the left
because the fractional bits show how many bits from the binary tranlation will
be considered fractional(before the '.').
ex: 5   is  0000000000000101   so if we don't shift the result will be 00000000.00000101 (0.0195)
if we shift 8 bits to the left we get 00000101.00000000 which is in fixed notation 5.0
*/
Fixed::Fixed(const int value) {
    this->val = value * (1 << fractionalBits);
    std::cout << LIGHT_YELLOW << "Int constructor called" << RESET << '\n';
}

/*Same here, but we use roundf to round the value to the nearest int value, ensuring we 
properly tore a rounded fixed point value*/
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

/*By dividing by 256 (or in binary 10000000) we changed the value from fixed-point to int 
(by removing the fractional part)*/
int Fixed::toInt() const { return (this->val) / (1 << this->fractionalBits); }

/*static_cats<float> is like casting in C, but safer
by casting the int val into float and then / 256 , we convert the val from fixed-point to float*/
float Fixed::toFloat() const { return static_cast<float>(this->val) / (1 << this->fractionalBits); }

int Fixed::getRawBits() const {
    std::cout << CYAN << "getRawBits member function called" << RESET << '\n';
    return (val);
}

void Fixed::setRawBits(int const raw) {
    this->val = raw;
}