/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:57:23 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/16 17:01:51 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:
	
	ScavTrap(std::string name);
	~ScavTrap();
	void	guardGate();
	int		getStat(int i);
	void	attack(const std::string& target);
	
	private:
		ScavTrap(const ScavTrap &scavTrap);
		ScavTrap& operator=(const ScavTrap &other);
};

#endif