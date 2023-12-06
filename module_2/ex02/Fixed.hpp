/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:35:52 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/10 16:35:54 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:

	int	_fixedPointValue;
	static const int _frac_bits = 8;

	public:

	Fixed(void);
	Fixed(const Fixed &fixed);
	Fixed(const int n);
	Fixed(const float n);
	Fixed& operator=(const Fixed &other);
	~Fixed(void);
	float	toFloat(void) const;
	int	toInt(void) const;
	int	getRawBits(void) const;
	void	setRawBits(const int raw);

	//comparison operators
	bool	operator>(const Fixed &other) const ;
	bool	operator<(const Fixed &other) const ;
	bool	operator>=(const Fixed &other) const ;
	bool	operator<=(const Fixed &other) const ;
	bool	operator==(const Fixed &other) const ;
	bool	operator!=(const Fixed &other) const ;
	
	//arithmetic operators
	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;

	//increment operators
	Fixed	operator++(void);//prefix
	Fixed	operator++(int);//postfix
	Fixed	operator--(void);//prefix
	Fixed	operator--(int);//postfix

	//min-max
	static Fixed&	min(Fixed &a, Fixed &b);
	static const Fixed&	min(const Fixed &a, const Fixed &b);
	static Fixed&	max(Fixed &a, Fixed &b);
	static const Fixed&	max(const Fixed &a, const Fixed &b);	
};

std::ostream & operator<<(std::ostream & output, Fixed const & fixed);

#endif

