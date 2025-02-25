/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:08:29 by turescu           #+#    #+#             */
/*   Updated: 2025/02/24 12:44:00 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

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
    Fixed& operator = (const Fixed& copy);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif