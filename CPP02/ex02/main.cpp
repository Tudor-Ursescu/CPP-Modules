/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:41:13 by turescu           #+#    #+#             */
/*   Updated: 2025/02/24 15:36:16 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << YELLOW << a << RESET << std::endl;
    std::cout << YELLOW << ++a << RESET << std::endl;
    std::cout << YELLOW << a << RESET << std::endl;
    std::cout << YELLOW << a++ << RESET << std::endl;
    std::cout << YELLOW << a << RESET << std::endl;
    std::cout << YELLOW << b << RESET << std::endl;
    std::cout << YELLOW << Fixed::max( a, b ) << RESET << std::endl;
    return 0;
}