/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:08:16 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/01 19:08:19 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
}

Contact::~Contact(void){
}

void	Contact::set_fname(std::string string){
	this->fname = string;
}

void	Contact::set_lname(std::string string){
	this->lname = string;
}

void	Contact::set_nick(std::string string){
	this->nick = string;
}

void	Contact::set_secret(std::string string){
	this->secret = string;
}

void	Contact::set_num(std::string string){
	this->num = string;
}

std::string	Contact::get_fname(void){
	return(this->fname);
}

std::string	Contact::get_lname(void){
	return(this->lname);
}

std::string	Contact::get_nick(void){
	return(this->nick);
}

std::string	Contact::get_num(void){
	return(this->num);
}

std::string	Contact::get_secret(void){
	return(this->secret);
}
