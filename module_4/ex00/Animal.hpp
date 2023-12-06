/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:47:03 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/20 13:49:56 by arybushk         ###   ########.fr       */
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
	~Animal();

	std::string getType(void) const;
	void 	setType(std::string type);
	virtual void	makeSound(void) const;
};

#endif