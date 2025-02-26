/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:15:41 by turescu           #+#    #+#             */
/*   Updated: 2025/02/26 17:40:09 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : val(0) {
    std::cout << BLUE << "Default constructor called" << RESET << '\n';
}

Fixed::Fixed(const Fixed& copy) {
    std::cout << PINK << "Copy constructor called" << RESET << '\n';
    this->val = copy.val;
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

Fixed& Fixed::operator ++() {
    this->val += 1; // given the fact that the feractionalBits is 8, then when we increment by 1
    return *this;   // we are actually incrementing by 1/2^8 (1/256) = 0.00390625 
}

Fixed Fixed::operator ++(int) { // post incrementation : store old value in temp copy of instance
    Fixed temp(*this);     // modify the actual value  , and return the old val, from the copy obj.
    this->val += 1;
    return temp;
}

Fixed& Fixed::operator --() { //returns a reference to the instance so we don't make a coppy of the
    this->val -= 1;           // modified object.
    return *this;
}

Fixed Fixed::operator --(int) { // post decrementation : store old value , modify, and return old val.
    Fixed temp(*this);
    this->val -= 1;
    return temp;
}

Fixed Fixed::operator + ( const Fixed& other) const{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator - ( const Fixed& other) const{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator * ( const Fixed& other) const{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator / ( const Fixed& other) const{
    if (other.toFloat() == 0) {
        std::cerr << RED << "Error: Division by zero!" << RESET << '\n';
        return Fixed(0);
    }
    else
        return Fixed(this->toFloat() / other.toFloat());
}

Fixed::~Fixed() {
    std::cout << RED << "Destructor called\n"; 
}

std::ostream& operator<<(std::ostream& os, const Fixed& other) {
    os << other.toFloat();
    return os;
}

bool Fixed::operator > (const Fixed& other) const { return (this->val > other.val); }
bool Fixed::operator < (const Fixed& other) const { return (this->val < other.val); } 
bool Fixed::operator >= (const Fixed& other) const { return (this->val >= other.val); }
bool Fixed::operator <= (const Fixed& other) const { return (this->val <= other.val); }
bool Fixed::operator == (const Fixed& other) const { return (this->val == other.val); }
bool Fixed::operator != (const Fixed& other) const { return (this->val != other.val); }

int Fixed::toInt() const { return (this->val) / (1 << this->fractionalBits); }

float Fixed::toFloat() const { return static_cast<float>(this->val) / (1 << this->fractionalBits); }

int Fixed::getRawBits() const {
    std::cout << CYAN << "getRawBits member function called" << RESET << '\n';
    return (val);
}

void Fixed::setRawBits(int const raw) {
    this->val = raw;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) { return (a > b ? a : b); }
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) { return (a < b ? a : b); }
Fixed& Fixed::max(Fixed& a, Fixed& b) { return (a > b ? a : b); }
Fixed& Fixed::min(Fixed& a, Fixed& b) { return (a < b ? a : b); }
