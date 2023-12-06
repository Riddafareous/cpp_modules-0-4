/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:27:45 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/11 20:18:54 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void){
	Point a(Fixed(10), Fixed(10));
	Point b(Fixed(1), Fixed(1));
	Point c(Fixed(42), Fixed(42));
	Point point(Fixed(10), Fixed(10));

	if (bsp(a, b, c, point) == false)
		std::cout << "FALSE" << std::endl;
	else
		std::cout << "TRUE" << std::endl;

	return (0);
}
