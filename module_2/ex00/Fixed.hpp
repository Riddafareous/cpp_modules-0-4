/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:47:34 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/08 14:47:36 by arybushk         ###   ########.fr       */
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
	Fixed& operator=(const Fixed &other);
	~Fixed(void);
	int	getRawBits(void) const;
	void	setRawBits(const int raw);
};

#endif
