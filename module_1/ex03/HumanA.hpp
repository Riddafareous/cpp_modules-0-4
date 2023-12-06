/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:52:53 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/03 19:52:55 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{

private:
	Weapon& _weapon;
	std::string _name;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);
	void	set_weapon(Weapon &weapon);
};

#endif
