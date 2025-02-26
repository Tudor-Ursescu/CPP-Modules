/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:41:13 by turescu           #+#    #+#             */
/*   Updated: 2025/02/26 17:43:00 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << YELLOW << a << " a" << RESET << std::endl;
    std::cout << YELLOW << ++a << " ++a" << RESET << std::endl;
    std::cout << YELLOW << a << " a" << RESET << std::endl;
    std::cout << YELLOW << a++ << " a++" << RESET << std::endl;
    std::cout << YELLOW << a << " a" << RESET << std::endl;
    std::cout << YELLOW << --a << " --a" << RESET << std::endl;
    std::cout << YELLOW << a-- << " a--" << RESET << std::endl;
    std::cout << YELLOW << a << " a" << RESET << std::endl;
    std::cout << YELLOW << (a >= b) << " a >= b" << RESET << std::endl;
    std::cout << YELLOW << (a == b) << " a == b" << RESET << std::endl;
    std::cout << YELLOW << (a <= b) << " a <= b" << RESET << std::endl;
    std::cout << YELLOW << (a / b) << " a / b" RESET << std::endl;
    std::cout << YELLOW << (b / a) << " the division by 0 returns 0 in this case(see how '/' operator is handled)" RESET << std::endl;
    std::cout << YELLOW << (a * b) << " a * b" << RESET << std::endl;
    std::cout << YELLOW << b << " b" <<  RESET << std::endl;
    std::cout << YELLOW << (b / b) << " b / b" <<  RESET << std::endl;
    std::cout << YELLOW << Fixed::max( a, b ) << RESET << std::endl;
    std::cout << Fixed(1.2f) <<std::endl;
    return 0;
}


/* to understand properly:
-given our fractional bits value is always 8, it means that the value that we store
inside our objects, being an int , has a different representation in the output.
-example: Fixed a :: val = 0 => std::cout << a => 0
          Fixed a :: val = 1 => std::cout << a => 1 * 256(2^8) = 256;
          Fixed a :: val = 256 => std::cout << a => 256 256 = 1.0
-that is why a = 0 and ++a (a += 1) is actually 0 += 1/256 = */