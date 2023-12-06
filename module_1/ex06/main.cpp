/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:46:33 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/06 18:46:34 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

int	complaint_cap(char *arg){
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++){
		if (std::string(arg).compare(levels[i]) == 0)
			return(i);
	}
	return (-1);
}

void	the_switch(char *arg, Harl &Karen){
	switch (complaint_cap(arg))
	{
		case 0:
			Karen.complain("DEBUG");
		case 1:
			Karen.complain("INFO");
		case 2:
			Karen.complain("WARNING");
		case 3:
			Karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int	main(int argc, char **argv){
	Harl	Karen;
	int	level_cap;

	if (argc != 2){
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	else
		the_switch(argv[1], Karen);
	return(0);
}
