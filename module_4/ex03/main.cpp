/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:19:04 by arybushk          #+#    #+#             */
/*   Updated: 2023/12/02 19:23:05 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main(void){
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << "tmp: " << tmp << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	std::cout << "tmp: " << tmp << std::endl;
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "test deleting bob" << std::endl;
	delete bob;
	std::cout << "test deleted bob" << std::endl;
	std::cout << "test deleting me" << std::endl;
	delete me;
	std::cout << "test deleted me" << std::endl;
	std::cout << "test deleting src" << std::endl;
	delete src;
	std::cout << "test deleted src" << std::endl;
	return 0;
}