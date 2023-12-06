/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:33:18 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/16 14:50:42 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;

	std::cout << "FragTrap: " << this->_Name << " at attention" << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap: " << this->_Name << " out" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	if (this->_EnergyPoints <= 0){
		std::cout << "FragTrap" << this->_Name << " low on juice" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_Name << " requesting a positive high five on the standard output" << std::endl;
}