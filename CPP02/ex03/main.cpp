/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:41:13 by turescu           #+#    #+#             */
/*   Updated: 2025/02/26 17:56:41 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
    Point a(Fixed(0), Fixed(0));
    Point b(Fixed(10), Fixed(0));
    Point c(Fixed(5), Fixed(10));

    Point inside(Fixed(5), Fixed(5));
    Point outside(Fixed(10), Fixed(10));
    Point onEdge(Fixed(5), Fixed(0));
    Point onPointA(Fixed(0), Fixed(0));

    std::cout << BLUE << "Inside: " << bsp(a, b, c ,inside) << RESET << std::endl;
    std::cout << RED << "Outside: " << bsp(a, b, c ,outside) << RESET << std::endl;
    std::cout << PINK << "On the Edge: " << bsp(a, b, c , onEdge) << RESET << std::endl;
    std::cout << TEAL << "On the Vertice A: " << bsp(a, b, c , onPointA) << RESET << std::endl;
    
    return 0;
}