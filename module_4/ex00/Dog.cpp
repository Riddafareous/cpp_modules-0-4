/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:20:28 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/17 20:29:54 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog"){
	std::cout << "Dog constructed" << std::endl;
}

Dog::~Dog(void){
	std::cout << "Dog detsructed" << std::endl;
}

Dog::Dog(const Dog &dog){
	*this = dog;
	std::cout << "CopyDog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other){
	this->_type = other._type;
	return (*this);
}

void	Dog::makeSound(void) const{
	std::cout << "Woof" << std::endl;
}