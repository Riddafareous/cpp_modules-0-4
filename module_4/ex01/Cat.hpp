/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:31:20 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/21 22:59:02 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal
{

	private:
	Brain *brain;

	public:
	Cat();
	~Cat();
	Cat(const Cat &cat);
	Cat& operator=(const Cat &other);
	void	makeSound(void) const;

};

#endif