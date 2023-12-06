/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:20:06 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/17 20:13:04 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
class WrongAnimal
{
	protected:

	std::string _type;

	public:

	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &wrongAnimal);
	WrongAnimal& operator=(const WrongAnimal &other);
	~WrongAnimal();

	std::string getType(void);
	void 	setType(std::string type);
	void	makeSound(void);

};

#endif