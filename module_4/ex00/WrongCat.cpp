/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:24:14 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/17 20:18:47 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat"){
	std::cout << "Cat constructed" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "Cat detsructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat){
	*this = wrongCat;
	std::cout << "CopyWrongCat constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other){
	this->_type = other._type;
	return (*this);
}