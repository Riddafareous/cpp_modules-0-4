/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:31:27 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/20 16:45:46 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

	private:
	Brain *brain;

	public:
	Dog();
	~Dog();
	Dog(const Dog &dog);
	Dog& operator=(const Dog &other);
	void	makeSound(void) const;

};

#endif