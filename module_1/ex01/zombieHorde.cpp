/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:59:58 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/03 19:00:00 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name){
	
	Zombie *horde = new Zombie[N];
	N--;
	while (N >= 0){
		horde[N].set_name(name);
		N--;
	}
	return (horde);
}