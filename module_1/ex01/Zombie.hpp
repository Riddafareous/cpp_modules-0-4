/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:59:28 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/03 18:59:30 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);

void	announce(void);
void	set_name(std::string name);
};
Zombie	*zombieHorde(int N, std::string name);

#endif
