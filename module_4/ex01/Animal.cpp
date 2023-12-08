/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:30:56 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/21 16:08:04 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Beast") {
	std::cout << "The Beast Rises" << std::endl;
}

Animal::Animal(std::string type){
	this->_type = type;
	std::cout << "The Beast " << this->_type << " Rises" << std::endl;
}

Animal::~Animal(void){
	std::cout << "The Beast Sleeps" << std::endl;
}

Animal::Animal(const Animal &animal){
	*this = animal;
	std::cout << "The Beast Clones" << std::endl;
}

Animal& Animal::operator=(const Animal &other){
	this->_type = other._type;
	return (*this);
}

std::string Animal::getType(void) const {
	return (this->_type);
}

void	Animal::setType(std::string type){
	this->_type = type;
}

void	Animal::makeSound(void) const {
	std::cout << "Animal soundoff" << std::endl;
}