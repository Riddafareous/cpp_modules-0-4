/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 23:15:02 by arybushk          #+#    #+#             */
/*   Updated: 2023/12/04 17:18:54 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure(){
	this->_type = "cure";
	std::cout << "Vanilla Cure constructor called" << std::endl;
}

Cure::Cure(const Cure& cure){
	*this = cure;
	std::cout << "Copy Cure onstructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other){
	this->_type = other._type;
	return (*this);
}

Cure::~Cure(){}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria	*Cure::clone() const{
	return (new Cure(*this));
}