/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:10:04 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/14 16:33:50 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
	std::cout << name << ": Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
	this->_Name = other._Name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = 0;
	return (*this);
}

ClapTrap::~ClapTrap(void){
	std::cout << this->_Name << ": Destructor called" << std::endl;
};

void	ClapTrap::attack(const std::string& target){

	if (this->_EnergyPoints <= 0 || this->_HitPoints == 0){
		std::cout << "ClapTrap " << this->_Name << "'s got no juice" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_Name 
	<< " attacks " << target << ", causing " 
	<< this->_AttackDamage << " points as damage." << std::endl;
	this->_EnergyPoints--;
	std::cout << "Current EnergyPoints: " << this->_EnergyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){

	if (this->_HitPoints == 0){
		std::cout << "Stop, STOP, He's already ded" << std::endl;
	}

	std::cout << "ClapTrap " << this->_Name 
	<< " takes " << amount << " damage." << std::endl;

	if (this->_HitPoints <= amount){
		std::cout << "ClapTrap " << this->_Name << ": pepsi" << std::endl;
		this->_HitPoints = 0;
		return ;
	}

	this->_HitPoints -= amount;
	std::cout << "Current HitPoints: " << this->_HitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){

	if (this->_EnergyPoints <= 0 || this->_HitPoints == 0){
		std::cout << "ClapTrap " << this->_Name << "'s got no juice" << std::endl;
		return ;
	}
	
	std::cout << "ClapTrap " << this->_Name << " is being repaired." << std::endl;
	this->_HitPoints += amount;
	this->_EnergyPoints--;
	std::cout << "Current HitPoints: " << this->_HitPoints << std::endl;
	std::cout << "Current EnergyPoints: " << this->_EnergyPoints << std::endl;
}