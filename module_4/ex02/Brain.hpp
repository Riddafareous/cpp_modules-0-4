/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:05:49 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/22 16:31:27 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{

	private:
	std::string ideas[100];

	public:
	Brain(void);
	Brain(const Brain &brain);
	~Brain(void);
	Brain& operator=(const Brain &other);

	std::string getIdea(int i) const;
};


#endif