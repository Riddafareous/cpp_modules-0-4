/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:43:36 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/09 21:43:38 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void){
	this->_fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy consructor called" << std::endl;
	this->setRawBits(fixed.getRawBits());
}

Fixed::Fixed(const int n) : _fixedPointValue(n << _frac_bits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fixedPointValue(std::roundf(n * (1 << _frac_bits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedPointValue = other.getRawBits();
	return(*this);
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(const int raw){
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)(this->getRawBits()) / (1 << _frac_bits));
}

int	Fixed::toInt(void) const {
	return (this->_fixedPointValue >> this->_frac_bits);
}

std::ostream & operator<<(std::ostream & output, Fixed const & fixed) {
	output << fixed.toFloat();
	return (output);
}