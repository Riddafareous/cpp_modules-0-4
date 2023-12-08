/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:31:14 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/21 22:58:19 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat"){
	try{
		this->brain = new Brain();
	}
	catch (const std::bad_alloc &e){
		std::cout << "Malloc fail" << e.what() << std::endl;
	}
	std::cout << "Cat constructed" << std::endl;
}

Cat::~Cat(void){
	delete this->brain;
	std::cout << "Cat detsructed" << std::endl;
}

Cat::Cat(const Cat &cat){
	*this = cat;
	std::cout << "CopyCat constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other){
	this->_type = other._type;
	this->brain = other.brain;
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}