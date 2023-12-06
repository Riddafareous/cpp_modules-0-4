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

int	main(int argc, char **argv){
	Harl	Karen;

	if (argc < 2){
		std::cout << "Next time type something, waste of taxpayer money." << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
		Karen.complain(argv[i]);
	return(0);
}
