/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:53:38 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/03 19:53:40 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{

private:
	Weapon *_weapon;
	std::string _name;

public:
	HumanB(std::string name);
	~HumanB(void);
	void	attack(void);
	void	set_weapon(Weapon &weapon);
};

#endif
