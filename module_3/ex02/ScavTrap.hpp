/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:06:26 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/16 16:57:58 by arybushk         ###   ########.fr       */
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
	void	attack(const std::string& target);
	int		getStat(int i);
	private:
		ScavTrap(const ScavTrap &scavTrap);
		ScavTrap& operator=(const ScavTrap &other);
};

#endif