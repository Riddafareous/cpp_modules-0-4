/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:06:06 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/02 19:06:07 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie *zombie = newZombie("Jamiroquai");
	zombie->announce();
	randomChump("Robert");
	delete zombie;
	return (0);
}