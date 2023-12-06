/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:12:02 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/17 20:29:09 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat : public Animal
{

	private:

	public:
	Cat();
	~Cat();
	Cat(const Cat &cat);
	Cat& operator=(const Cat &other);
	void	makeSound(void) const;

};

#endif