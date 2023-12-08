/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:36:08 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/21 22:59:12 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <string>
#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{

	private:
	Brain *brain;
	
	public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &wrongCat);
	WrongCat& operator=(const WrongCat &other);
	using WrongAnimal::makeSound;

};

#endif