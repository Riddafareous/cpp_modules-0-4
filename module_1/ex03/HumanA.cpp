/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:52:59 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/03 19:53:01 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon){
	this->_name = name;
}

HumanA::~HumanA(void){
}

void	HumanA::attack(void){
	std::cout << this->_name << " attacks with their " << this->_weapon.get_type() << std::endl;
}

void	HumanA::set_weapon(Weapon &weapon){
	this->_weapon = weapon;
}
