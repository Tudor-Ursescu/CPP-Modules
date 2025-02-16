/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:58:07 by turescu           #+#    #+#             */
/*   Updated: 2025/02/15 16:58:16 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed xp;
    const Fixed yp;
    public:
    Point();
    Point(const Fixed x, const Fixed y);
    Point(const Point& other);      
    // Point& operator = (const Point& other);
    Fixed getX() const;
    Fixed getY() const;
    ~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif