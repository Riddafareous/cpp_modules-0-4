/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:09:04 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/01 19:09:06 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"

int	main(void){

std::string	buffer;
Phonebook Phonebook;

while (1){
	std::cout << "Hello, I am a phonebook, what you want?" << std::endl;
	std::getline(std::cin, buffer);
	if (std::cin.fail())
		exit(0);
	if (buffer.compare("ADD") == 0)
		Phonebook.add_contact();
	else if (buffer.compare("SEARCH") == 0)
		Phonebook.find_contact();
	else if (buffer.compare("EXIT") == 0){
		std::cout << "Thank you for usng *Phonebook*, now go away!" << std::endl;
		return (0);
	}
	else
		std::cout << "Dude, i know like 3 commands, how hard can it be" << std::endl;
}
return (1);
}
