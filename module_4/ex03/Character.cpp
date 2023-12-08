/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 00:16:02 by arybushk          #+#    #+#             */
/*   Updated: 2023/12/04 17:47:30 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character(){
	for(int i = 0; i < 4; i++){
		this->_materia[i] = NULL;
	}
	std::cout << "Character vanilla constructor called" << std::endl;
}

Character::Character(std::string name){
	for(int i = 0; i < 4; i++){
		this->_materia[i] = NULL;
	}
	this->_Name = name;
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character& character){
	*this = character;
	std::cout << "Character destrcutor called" << std::endl;
}

Character& Character::operator=(const Character& other){
	for(int i = 0; i < 4; i++) {
		this->_materia[i] = other._materia[i]->clone();
	}
	this->_Name = other._Name;
	return (*this);
}

Character::~Character(){
	for(int i = 0; i < 4; i++){
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
}

const std::string& Character::getName() const{
	return (this->_Name);
}

void	Character::equip(AMateria* m){
	for(int i = 0; i < 4; i++){
		if (this->_materia[i] == NULL)
			this->_materia[i] = m;
	}
}

void	Character::unequip(int idx){
	if (idx > 3 || idx < 0)
		return ;
	if (this->_materia[idx] != NULL)
		this->_materia[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target){
	if (this->_materia[idx] != NULL)
		this->_materia[idx]->use(target);
	else
		std::cout << "No materia at slot " << idx << " dolt" << std::endl;
}
