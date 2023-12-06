/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:59:36 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/03 18:59:38 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->_name = name;
	std::cout << "I " << this->_name << " exist" << std::endl;
}

Zombie::Zombie(void){
	std::cout << "Nameless zombie spawned" << std::endl;
}

Zombie::~Zombie(void){
	std::cout << this->_name << " pepsi" << std::endl;
}

void	Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name){
	this->_name = name;
}