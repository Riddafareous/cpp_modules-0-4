/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 22:46:54 by arybushk          #+#    #+#             */
/*   Updated: 2023/12/04 17:18:46 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice(){
	this->_type = "ice";
	std::cout << "Ice Materia vanilla constructor called" << std::endl;
}

Ice::Ice(const Ice& ice){
	_type = ice.getType();
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& other){
	this->_type = other._type;
	return (*this);
}

Ice::~Ice(){}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria	*Ice::clone() const {
	return (new Ice(*this));
}