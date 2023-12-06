/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:08:39 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/01 19:08:41 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <string>

Phonebook::Phonebook(void){
	this->index = 0;
}

Phonebook::~Phonebook(void){
}

void	Phonebook::add_contact(void)
{
	std::string str;

	std::cout << "Give first name: " << std::endl;
	std::getline(std::cin, str);
	if (std::cin.fail())
		exit (1);
	else if (str.compare("") == 0){
		while (str.compare("") == 0){
			std::cout << "Use them fingies and type " << std::endl;
			std::getline(std::cin, str);
			if (std::cin.fail())
				exit (1);
		}
	}
	this->Contacts[this->index].set_fname(str);
	std::cout << "Give last name: " << std::endl;
	std::getline(std::cin, str);
	if (std::cin.fail())
		exit (1);
	else if (str.compare("") == 0){
		while (str.compare("") == 0){
			std::cout << "Use them fingies and type " << std::endl;
			std::getline(std::cin, str);
			if (std::cin.fail())
				exit (1);
		}
	}
	this->Contacts[this->index].set_lname(str);
	std::cout << "Give nick-name: " << std::endl;
	std::getline(std::cin, str);
	if (std::cin.fail())
		exit (1);
	else if (str.compare("") == 0){
		while (str.compare("") == 0){
			std::cout << "Use them fingies and type " << std::endl;
			std::getline(std::cin, str);
			if (std::cin.fail())
				exit (1);
		}
	}
	this->Contacts[this->index].set_nick(str);
	std::cout << "Give digits: " << std::endl;
	std::getline(std::cin, str);
	if (std::cin.fail())
		exit (1);
	else if (str.compare("") == 0){
		while (str.compare("") == 0){
			std::cout << "Use them fingies and type " << std::endl;
			std::getline(std::cin, str);
			if (std::cin.fail())
				exit (1);
		}
	}
	this->Contacts[this->index].set_num(str);
	std::cout << "Give goss: " << std::endl;
	std::getline(std::cin, str);
	if (std::cin.fail())
		exit (1);
	else if (str.compare("") == 0){
		while (str.compare("") == 0){
			std::cout << "Use them fingies and type " << std::endl;
			std::getline(std::cin, str);
			if (std::cin.fail())
				exit (1);
		}
	}
	this->Contacts[this->index].set_secret(str);
	if (this->size < 8)
		this->size++;
	if (this->index == 7)
		this->index = 0;
	else
		this->index++;
	std::cout << "Gadim!" << std::endl;
}

void	Phonebook::display_contact(int i){
	
	if (i > 7 || i < 0 ){
		std::cout << "Nice try buck-o!" << std::endl;
		return;
	}
	std::cout << i + 1 << " | " << this->Contacts[i].get_fname() << " | " \
	<< this->Contacts[i].get_lname() << " | " << this->Contacts[i].get_nick() \
	<< " | " << this->Contacts[i].get_num() << " | " << this->Contacts[i].get_secret() \
	<< " |" << std::endl;
}

void	Phonebook::show_contact(int i){

	if (i > 7){
		std::cout << "Nice try buck-o!" << std::endl;
		return;
	}
	if ((this->Contacts[i].get_fname()).length() > 10)
		std::cout << i + 1 << " |" << std::setw(9) << this->Contacts[i].get_fname().substr(0, 9) << ".|";
	else
		std::cout << i + 1 << " |" << std::setw(10) << std::setfill(' ') << this->Contacts[i].get_fname() << "|";
	if ((this->Contacts[i].get_lname()).length() > 10)
		std::cout << std::setw(9) << this->Contacts[i].get_lname().substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::setfill(' ') << this->Contacts[i].get_lname() << "|";
	if ((this->Contacts[i].get_nick()).length() > 10)
		std::cout << std::setw(9) << this->Contacts[i].get_nick().substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::setfill(' ') << this->Contacts[i].get_nick() << "|";
	if ((this->Contacts[i].get_num()).length() > 10)
		std::cout << std::setw(9) << this->Contacts[i].get_num().substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::setfill(' ') << this->Contacts[i].get_num() << "|";
	if ((this->Contacts[i].get_secret()).length() > 10)
		std::cout << std::setw(9) << this->Contacts[i].get_secret().substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::setfill(' ') << this->Contacts[i].get_secret() << "|";
}

void	Phonebook::show_all(void){

	int i;

	i = 0;
	std::cout << "-----------------------------------------------------------------" << std::endl;
	std::cout << "   Index  |  F_Name  |  L_Name  | Nic_Name |  Number  |  Secret  " << std::endl;
	std::cout << "-----------------------------------------------------------------" << std::endl;
	while (i < this->size)
	{
		this->show_contact(i);
		i++;
		std::cout << std::endl;
	}
	std::cin.clear();
}

void	Phonebook::find_contact(void){

	int i;

	this->show_all();
	std::cout << "Which one d'you want?: " <<std::endl;
	std::cin >> i;
	if (std::cin.fail())
		exit(0);
	this->display_contact(i - 1);
	std::cin.clear();
	std::cin.ignore(100, '\n');
}
