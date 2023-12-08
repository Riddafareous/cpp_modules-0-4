/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:31:00 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/21 16:09:28 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
class Animal
{
	protected:

	std::string _type;

	public:

	Animal();
	Animal(std::string type);
	Animal(const Animal &animal);
	Animal& operator=(const Animal &other);
	virtual ~Animal();

	std::string getType(void) const;
	void 	setType(std::string type);
	virtual void	makeSound(void) const;
};

#endif