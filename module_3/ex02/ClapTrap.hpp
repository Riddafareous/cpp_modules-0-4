/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:06:12 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/15 15:08:38 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>

class ClapTrap
{
	protected:

	std::string _Name;
	int	_HitPoints;
	int	_EnergyPoints;
	int _AttackDamage;

	public:

	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &claptrap);
	ClapTrap& operator=(const ClapTrap &other);
	~ClapTrap(void);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif