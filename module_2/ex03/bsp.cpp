/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:15:45 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/11 20:17:19 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	get_area(const Point &a, const Point &b, const Point &c){
	return (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));
}

Fixed	abs(const Fixed &a){
	if (a < 0)
		return (a * -1);
	return (a);
}

Fixed	slope(const Point &a, const Point &b){
	return((a.getY() - b.getY()) / (a.getX() - b.getX()));
}

bool	not_on_vertice(const Point &a, const Point &b, const Point &point){
	Fixed d = a.getY() - slope(a, b) * a.getX();
	if (point.getY() == point.getX() * slope(a, b) + d)
		return (false);
	return (true);
}

bool	bsp(const Point &a, const Point &b, const Point &c, const Point &point){
	Fixed A;
	Fixed A_one;
	Fixed A_two;
	Fixed A_three;

	if (point == a || point == b || point == c)
		return (false);
	if (not_on_vertice(a, b, point) == false || not_on_vertice(a, c, point) == false || not_on_vertice(b, c, point) == false)
		return (false);
	A = abs(get_area(a, b, c));
	A_one = abs(get_area(point, a, b));
	A_two = abs(get_area(point, b, c));
	A_three = abs(get_area(point, a, c));
	if (A != A_one + A_two + A_three)
		return (false);
	return (true);
}