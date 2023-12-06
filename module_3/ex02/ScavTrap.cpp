/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:06:23 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/16 16:58:33 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;

	std::cout << "ScavTrap: " << name << " reporting for dootie!" << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap: " << this->_Name << " signing off" << std::endl;
}

void	ScavTrap::guardGate(void){
	if (this->_EnergyPoints <= 0){
		std::cout << "ScavTrap" << this->_Name << " low on juice" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_Name << " gatekeeping engaged" << std::endl;
}

void	ScavTrap::attack(const std::string& target){

	if (this->_EnergyPoints <= 0 || this->_HitPoints == 0){
		std::cout << "ScavTrap " << this->_Name << "'s got no juice" << std::endl;
		return ;
	}

	std::cout << "ScavTrap " << this->_Name 
	<< " attacks " << target << ", causing " 
	<< this->_AttackDamage << " points as damage." << std::endl;
	this->_EnergyPoints--;
	std::cout << "Current EnergyPoints: " << this->_EnergyPoints << std::endl;
}

int		ScavTrap::getStat(int i){
	switch (i)
	{
		case 1:
			return (this->_HitPoints);
			break ;
		case 2:
			return (this->_EnergyPoints);
			break ;
		case 3:
			return (this->_AttackDamage);
			break ;
		default:
			return -1;
	}
}