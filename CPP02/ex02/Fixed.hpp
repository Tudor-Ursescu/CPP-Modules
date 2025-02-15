/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:08:29 by turescu           #+#    #+#             */
/*   Updated: 2025/02/15 14:51:10 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>


# define RED "\033[31m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define PINK "\033[38;5;205m"
# define TEAL "\033[38;5;30m"
# define LAVENDER "\033[38;5;183m"
# define CYAN "\033[38;5;51m"
# define LIGHT_YELLOW "\033[38;5;229m"
# define RESET "\033[0m"


class Fixed {
private:
    int val;
    static const int fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed& copy);
    Fixed(const int value);
    Fixed(const float value);
    Fixed& operator = (const Fixed& copy);
    Fixed& operator ++();
    Fixed operator ++(int);
    Fixed& operator --();
    Fixed operator --(int);
    Fixed operator + (const Fixed& other) const;
    Fixed operator - (const Fixed& other) const;
    Fixed operator * (const Fixed& other) const;
    Fixed operator / (const Fixed& other) const;
    ~Fixed();
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);     
    static const Fixed& max(const Fixed& a, const Fixed& b);
    int toInt(void) const;
    float toFloat(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
    bool operator > (const Fixed& other) const;
    bool operator < (const Fixed& other) const;
    bool operator >= (const Fixed& other) const;
    bool operator <= (const Fixed& other) const;
    bool operator == (const Fixed& other) const;
    bool operator != (const Fixed& other) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif