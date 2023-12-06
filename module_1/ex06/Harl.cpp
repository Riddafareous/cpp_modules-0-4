/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:46:51 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/06 18:46:52 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void	Harl::debug(void){
	std::cout << "[DEBUG]: I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle";
	std::cout << "-special-ketchuup burger. I really do!";
	std::cout << std::endl;
}

void	Harl::info(void){
	std::cout << "[INFO] I cannot believe adding extra bacon ";
	std::cout << "costs more money. You didn't put enough ";
	std::cout << "bacon in my burger! If you did, I wouldn't ";
	std::cout << "be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "[WARNING] I think I desreve to have some extra ";
	std::cout << "bacon for free. I've been coming for ";
	std::cout << "years whereas you started working here ";
	std::cout << "since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "[ERROR] This is unacceptable! I want to speak ";
	std::cout << "to the manager now." << std::endl;
}

void	Harl::complain(std::string level){
	int	i;
	void	(Harl::*complain_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4; i++){
		if (level.compare(levels[i]) == 0){
			(this->*complain_ptr[i])();
			break ;
		}
	}
	if (i == 4){
		std::cout << "[STOOPID] Write words I know next time: DEBUG, INFO, WARNING or ERROR. ";
		std::cout << "Jeez, the nerve of some people!" << std::endl;
	}
}
