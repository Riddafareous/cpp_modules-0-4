/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 22:19:41 by arybushk          #+#    #+#             */
/*   Updated: 2023/12/02 19:12:31 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "Vanilla Materia constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type){
	this->_type = type;
	std::cout << "Other Materia constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& materia){
	*this = materia;
	std::cout << "Materia Copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other){
	this->_type = other._type;
	return (*this);
}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const{
	return (this->_type);
}

void	AMateria::use(ICharacter& target){
	return ;
}