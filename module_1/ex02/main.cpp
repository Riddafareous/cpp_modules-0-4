/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:34:16 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/03 19:34:17 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void){

	std::string variable = "HI THIS IS BRAIN";
	std::string *stringPTR = &variable;
	std::string &stringREF = variable;

	std::cout << &variable << std::endl;
	std::cout << &(*stringPTR) << std::endl;
	std::cout << &stringREF << std::endl;
	
	std::cout << variable << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF <<std::endl;

	return (0);
}
