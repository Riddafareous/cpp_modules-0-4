/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:31:23 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/21 16:10:11 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog"){
	try{
		this->brain = new Brain();
	}
	catch (const std::bad_alloc &e){
		std::cout << "Malloc fail" << e.what() << std::endl;
	}
	std::cout << "Dog constructed" << std::endl;
}

Dog::~Dog(void){
	delete this->brain;
	//delete this;
	std::cout << "Dog detsructed" << std::endl;
}

Dog::Dog(const Dog &dog){
	*this = dog;
	std::cout << "CopyDog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other){
	this->_type = other._type;
	this->brain = other.brain;
	return (*this);
}

void	Dog::makeSound(void) const{
	std::cout << "Woof" << std::endl;
}