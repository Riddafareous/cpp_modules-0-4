/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 23:11:54 by arybushk          #+#    #+#             */
/*   Updated: 2023/12/02 19:15:40 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
	Cure();
	Cure(const Cure& cure);
	Cure& operator=(const Cure& other);
	~Cure();

	void use(ICharacter& target);
	AMateria* clone() const;
};


#endif