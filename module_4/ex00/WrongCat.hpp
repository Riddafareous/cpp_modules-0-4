/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:23:19 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/17 17:29:39 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	private:

	public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &wrongCat);
	WrongCat& operator=(const WrongCat &other);
	using WrongAnimal::makeSound;

};

#endif