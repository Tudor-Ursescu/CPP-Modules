/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:41:13 by turescu           #+#    #+#             */
/*   Updated: 2025/02/26 17:39:01 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    a = Fixed(1234.4321f);
    
    std::cout << BLUE << "a is " << a << RESET << std::endl;
    std::cout << BLUE << "b is " << b << RESET << std::endl;
    std::cout << BLUE << "c is " << c << RESET << std::endl;
    std::cout << BLUE << "d is " << d << RESET << std::endl;
    std::cout << BLUE << "a is " << a.toInt() << " as integer" << RESET << std::endl;
    std::cout << BLUE << "b is " << b.toInt() << " as integer" << RESET << std::endl;
    std::cout << BLUE << "c is " << c.toInt() << " as integer" << RESET << std::endl;
    std::cout << BLUE << "d is " << d.toInt() << " as integer" << RESET << std::endl;
    Fixed const e(10);
    std::cout << BLUE << "e is " << e.toFloat() << " as float" << RESET << std::endl;
    return 0;
}


/* you will see that in  the toFloat case, the std::cout prints 10 instead of 10.0
you need to iomanip and specify through std::setprecision(n) where n is the nb of decimals after the .
when it comes to 0 after .*/