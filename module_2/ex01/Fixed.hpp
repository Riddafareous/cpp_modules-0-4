/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:43:30 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/09 21:43:32 by arybushk         ###   ########.fr       */
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
};

std::ostream & operator<<(std::ostream & output, Fixed const & fixed);

#endif
