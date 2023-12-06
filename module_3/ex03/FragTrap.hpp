/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:33:21 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/16 14:59:54 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

	FragTrap(std::string name);
	~FragTrap();

	void highFivesGuys(void);
	private:
		FragTrap(const FragTrap &fragTrap);
		FragTrap& operator=(const FragTrap &other);
};

#endif