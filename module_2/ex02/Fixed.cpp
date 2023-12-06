/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:35:59 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/10 16:36:01 by arybushk         ###   ########.fr       */
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

bool	Fixed::operator>(const Fixed &other) const{
	if (this->_fixedPointValue > other._fixedPointValue)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &other) const{
	if (this->_fixedPointValue < other._fixedPointValue)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &other) const{
	if (this->_fixedPointValue >= other._fixedPointValue)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &other) const{
	if (this->_fixedPointValue <= other._fixedPointValue)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &other) const{
	if (this->_fixedPointValue == other._fixedPointValue)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &other) const{
	if (this->_fixedPointValue != other._fixedPointValue)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &other) const{
	return (Fixed (this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other) const{
	return (Fixed (this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other) const{
	return (Fixed (this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other) const{
	return (Fixed (this->toFloat() / other.toFloat()));
}

Fixed	Fixed::operator++(void){
	++this->_fixedPointValue;
	return (*this);
}

Fixed	Fixed::operator++(int){
	Fixed tmp = *this;
	this->_fixedPointValue++;
	return (tmp);
}

Fixed	Fixed::operator--(void){
	--this->_fixedPointValue;
	return (*this);
}
Fixed	Fixed::operator--(int){
	Fixed tmp = *this;
	this->_fixedPointValue--;
	return (tmp);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b){
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b){
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b){
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b){
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}