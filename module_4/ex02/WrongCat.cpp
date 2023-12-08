/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:09:04 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/21 23:09:11 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat"){
	try{
		this->brain = new Brain();
	}
	catch (const std::bad_alloc &e){
		std::cout << "Malloc fail" << e.what() << std::endl;
	}
	std::cout << "Cat constructed" << std::endl;
}

WrongCat::~WrongCat(void){
	delete this->brain;
	std::cout << "Cat detsructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat){
	*this = wrongCat;
	std::cout << "CopyWrongCat constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other){
	this->_type = other._type;
	this->brain = other.brain;
	return (*this);
}