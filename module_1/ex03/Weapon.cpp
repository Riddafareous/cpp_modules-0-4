/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:52:41 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/03 19:52:43 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->_type = type;
}

Weapon::Weapon(void){}

Weapon::~Weapon(void){}

const std::string	&Weapon::get_type(void){
	return (this->_type);
}

void	Weapon::set_type(std::string type){
	this->_type = type;
}
