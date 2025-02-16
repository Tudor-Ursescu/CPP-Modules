/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:57:53 by turescu           #+#    #+#             */
/*   Updated: 2025/02/16 09:54:09 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : xp(0), yp(0) {
    // std::cout << CYAN << "Default point constructor called" << RESET << '\n';
}

Point::Point(const Fixed x, const Fixed y) : xp(x), yp(y) {
    // std::cout << BLUE << "Parameter point constructor called" << RESET << '\n';
}

Point::Point(const Point& other) : xp(other.xp), yp(other.yp) {
    // std::cout << YELLOW << "Point copy constructor called" << RESET << '\n';
}

Point::~Point() {
    // std::cout << RED << "Point destructor called" << RESET << '\n';
}

Fixed Point::getX(void) const {
    return this->xp;
}

Fixed Point::getY(void) const {
    return this->yp;
}
// Point& Point::operator = (const Point& other) {
//     if (this != &other) {
//         this->xp = other.xp;
//         this->yp = other.yp;
//     }
//     std::cout << PINK << "Point copy assignment operator called" << RESET << '\n';
//     return (*this);
// }

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed originalArea = Fixed::abs((a.getX() * (b.getY() - c.getY()) +
                                    b.getX() * (c.getY() - a.getY()) +
                                    c.getX() * (a.getY() - b.getY())) / Fixed(2));
    Fixed area1 = Fixed::abs((point.getX() * (a.getY() - b.getY()) +
                              a.getX() * (b.getY() - point.getY()) +
                              b.getX() * (point.getY() - a.getY())) / Fixed(2));
    Fixed area2 = Fixed::abs((point.getX() * (b.getY() - c.getY()) +
                              b.getX() * (c.getY() - point.getY()) +
                              c.getX() * (point.getY() - b.getY())) / Fixed(2));
    Fixed area3 = Fixed::abs((point.getX() * (c.getY() - a.getY()) +
                              c.getX() * (a.getY() - point.getY()) +
                              a.getX() * (point.getY() - c.getY())) / Fixed(2));
    if (area1 == 0 || area2 == 0 || area3 == 0)
        return false;
    return (area1 + area2 + area3 == originalArea);
}