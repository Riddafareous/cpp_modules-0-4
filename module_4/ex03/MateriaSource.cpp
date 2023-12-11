/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:56:32 by arybushk          #+#    #+#             */
/*   Updated: 2023/12/04 17:47:12 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(){
	for(int i = 0; i < 4; i++){
		this->_materia[i] = NULL;
	}
	std::cout << "MateriaSource vanilla constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource){
	*this = materiaSource;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){
	for(int i = 0; i < 4; i++){
		this->_materia[i] = other._materia[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource(){

	std::cout << "MateriaSource destructor called" << std::endl;
	for(int i = 0; i < 4; i++){
		std::cout << i << " = i" << std::endl;
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
}

void	MateriaSource::learnMateria(AMateria *materia){
	for(int i = 0; i < 4; i++){
		if (this->_materia[i] == NULL) {
			this->_materia[i] = materia;
			break;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type){
	for(int i = 0; i < 4; i++){
		if (this->_materia[i]->getType() == type)
			std::cout << "materia type found " << type << std::endl;
			return (this->_materia[i]->clone());
	}
	return (NULL);
}

