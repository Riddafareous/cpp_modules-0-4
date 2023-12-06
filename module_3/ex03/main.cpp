/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:33:24 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/16 16:56:27 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void){
	DiamondTrap bill("BILL");

	bill.WhoAmI();
	bill.attack("air");
	bill.beRepaired(5);
}