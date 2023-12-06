/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:37:44 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/11 20:00:32 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <cmath>
#include "Fixed.hpp"

class Point {

	private:
		const Fixed _x;
		const Fixed _y;
	public:

		Point(void);
		Point(const Fixed x, const Fixed y);
		Point(Point &point);
		Point& operator=(const Point &other);
		~Point(void);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
		bool	operator==(const Point &other) const;
};

bool	bsp(const Point &a, const Point &b, const Point &c, const Point &point);

#endif