/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:10:14 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/14 22:51:35 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap claptrap("CommonSense");
	ClapTrap woke("Offendibot");

	claptrap.attack("Bocal");
	claptrap.attack("Offendibot");
	woke.takeDamage(0);
	woke.beRepaired(0);
}