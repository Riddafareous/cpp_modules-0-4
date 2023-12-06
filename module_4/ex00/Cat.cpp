/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:11:58 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/17 20:29:28 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat"){
	std::cout << "Cat constructed" << std::endl;
}

Cat::~Cat(void){
	std::cout << "Cat detsructed" << std::endl;
}

Cat::Cat(const Cat &cat){
	*this = cat;
	std::cout << "CopyCat constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other){
	this->_type = other._type;
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}