/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:59:14 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/20 13:54:12 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	int army;

	army = 10;
	Zombie *horde = zombieHorde(army, "Bob");
	int i = 0;
	while (i < army)
	{
		horde[i].announce();
		i++;
	}
	delete horde;
	return (0);
}
