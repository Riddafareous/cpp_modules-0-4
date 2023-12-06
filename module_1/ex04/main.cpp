/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arybushk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:45:31 by arybushk          #+#    #+#             */
/*   Updated: 2023/11/06 16:45:32 by arybushk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	replace(char **argv, std::string str){

	std::ofstream	new_file;
	int	found_it;
	int	i;

	new_file.open((std::string(argv[1]) + ".replace").c_str());
	if (new_file.fail()){
		std::cout << "new file *womp womp* (error openin file)" << std::endl;
		return (1);
	}
	for (i = 0; i < (int)str.size(); i++){
		found_it = str.find(argv[2], i);
		if (found_it != -1 && found_it == i){
			new_file << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			new_file << str[i];
	}
	return (0);
}

int	main(int argc, char **argv){

	std::ifstream file;
	std::string	str;
	char c;

	if (argc != 4){
		std::cout << "Three arguments dude, no more no less, filepath and two string, get your head in the game" << std::endl;
		return (1);
	}
	file.open(argv[1]);
	if (file.fail()){
		std::cout << argv[1] << ":no such thing or can't open it" << std::endl;
		return (1);
	}
	while (file.eof() != true){
		file >> std::noskipws >> c;
		str += c;
	}
	file.close();

	return (replace(argv, str));
}
