/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:07:43 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/21 23:07:52 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("Wrong Beast") {
	std::cout << "The Wrong Beast Rises" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
	this->_type = type;
	std::cout << "The Wrong Beast " << this->_type << " Rises" << std::endl;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "The Wrong Beast Sleeps" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal){
	*this = wrongAnimal;
	std::cout << "The Wrong Beast Clones" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
	this->_type = other._type;
	return (*this);
}

std::string WrongAnimal::getType(void){
	return (this->_type);
}

void	WrongAnimal::setType(std::string type){
	this->_type = type;
}

void	WrongAnimal::makeSound(void){
	std::cout << "Wrong Animal soundoff" << std::endl;
}