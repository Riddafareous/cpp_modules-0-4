/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:52:32 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/03 19:52:34 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{

private:
	std::string _type;

public:
	Weapon(std::string type);
	Weapon(void);
	~Weapon(void);
	const std::string	&get_type(void);
	void	set_type(std::string type);
};


#endif
