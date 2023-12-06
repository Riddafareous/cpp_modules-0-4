/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:45:59 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/11 20:19:51 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){
	std::cout << "Constructor called" << std::endl;
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y){
	std::cout << "Other constructor called" << std::endl;
}

Point::Point(Point &point) : _x(point._x), _y(point._y){
	std::cout << "Copy constructor called" << std::endl;
}

Point::~Point(void){
	std::cout << "Destructor called" << std::endl;
}

Point&	Point::operator=(const Point &other){
	(Fixed)this->_x = other._x;
	(Fixed)this->_y = other._y;
	return (*this);
}

Fixed	Point::getX(void) const{
	return (this->_x);
}

Fixed	Point::getY(void) const{
	return (this->_y);
}

bool	Point::operator==(const Point &other) const{
	if (this->getX() == other.getX() && this->getY() == other.getY())
		return (true);
	return (false);
}