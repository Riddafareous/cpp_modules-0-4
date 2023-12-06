/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:53:48 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/03 19:53:49 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->_name = name;
}

HumanB::~HumanB(void){}

void	HumanB::attack(void){
	std::cout << this->_name << " attacks with their " << this->_weapon->get_type() << std::endl;
}

void	HumanB::set_weapon(Weapon &weapon){
	this->_weapon = &weapon;
}
