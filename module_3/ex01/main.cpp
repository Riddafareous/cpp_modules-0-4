/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:56:00 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/17 17:49:11 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void){
	
	ScavTrap dodo("Dodo");
	ScavTrap dud("Dud");

	dodo.attack("Dud");
	dud.takeDamage(dodo.getStat(3));
	dud.beRepaired(dud.getStat(3));

	return 0;
}