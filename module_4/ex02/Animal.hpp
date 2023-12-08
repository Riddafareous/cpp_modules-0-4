/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:05:00 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/22 15:30:41 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
class Animal
{
	protected:

	Animal();
	Animal(std::string type);
	Animal(const Animal &animal);
	std::string _type;

	public:

	Animal& operator=(const Animal &other);
	virtual ~Animal();

	std::string getType(void) const;
	void 	setType(std::string type);
	virtual void	makeSound(void) const = 0;
};

#endif