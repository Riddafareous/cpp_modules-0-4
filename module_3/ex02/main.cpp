/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:06:20 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/16 14:50:42 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void){
	FragTrap bob("Bob");

	bob.attack("something");
	bob.takeDamage(50);
	bob.beRepaired(49);
	bob.highFivesGuys();

	return (0);
}