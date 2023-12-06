/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:08:45 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/01 19:08:47 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class Phonebook{

private:
	Contact Contacts[8];
	int	size;
	int	index;


public:
	Phonebook(void);
	~Phonebook(void);
	void	add_contact(void);
	void	find_contact(void);
	void	show_contact(int i);
	void	display_contact(int i);
	void	show_all(void);
	void	delete_contact(void);
};

#endif
