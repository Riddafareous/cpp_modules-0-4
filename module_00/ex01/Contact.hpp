/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:08:26 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/01 19:08:27 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
class Contact {

private:
	std::string	fname;
	std::string	lname;
	std::string	nick;
	std::string	num;
	std::string	secret;
public:
	Contact(void);
	~Contact(void);
	void	set_fname(std::string string);
	void	set_lname(std::string string);
	void	set_nick(std::string string);
	void	set_num(std::string string);
	void	set_secret(std::string string);
	std::string	get_fname(void);
	std::string	get_lname(void);
	std::string	get_nick(void);
	std::string	get_num(void);
	std::string	get_secret(void);
};


#endif
