/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:33:15 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/22 16:03:44 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:

	std::string _Name;

	public:

	DiamondTrap(std::string name);
	~DiamondTrap();
	void WhoAmI(void);
	private:
		DiamondTrap(const DiamondTrap &DiamondTrap);
		DiamondTrap& operator=(const DiamondTrap &other);
};

#endif