/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:07:18 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/22 16:35:30 by arybushk         ###   ########.fr       */
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
	Brain* getBrain(void);

};

#endif