/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:31:03 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/20 17:03:51 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void){
	std::cout << "am bren!" << std::endl;
}

Brain::~Brain(void){
	std::cout << "ugh" << std::endl;
}

Brain::Brain(const Brain &brain){
	*this = brain;
}

Brain& Brain::operator=(const Brain &other){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.getIdea(i);
	return (*this);
}

std::string Brain::getIdea(int i) const{
	return (this->ideas[i]);
}