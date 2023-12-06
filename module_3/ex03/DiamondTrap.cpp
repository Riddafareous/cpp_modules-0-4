/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:33:11 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/16 16:54:46 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name){
	this->_Name = name;
	this->ClapTrap::_Name = name + "_clap_name";
	std::cout << "DiamondTrap: " << name << " the first, the last, the everything" << std::endl;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap " << this->_Name << " status: rekt" << std::endl;
}

void DiamondTrap::WhoAmI(void){
	std::cout << " I am DiamondTrap " << this->_Name << ", ClapTrap " << ClapTrap::_Name << std::endl;
}

