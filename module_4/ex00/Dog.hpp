/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:19:49 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/17 20:29:44 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "Animal.hpp"

class Dog : public Animal
{

	private:

	public:
	Dog();
	~Dog();
	Dog(const Dog &dog);
	Dog& operator=(const Dog &other);
	void	makeSound(void) const;

};

#endif