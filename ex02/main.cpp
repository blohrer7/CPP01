/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:36:36 by blohrer           #+#    #+#             */
/*   Updated: 2025/11/20 10:55:12 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of str:      " << &str << std::endl;
	std::cout << "Address of pointer: " << stringPTR << std::endl;
	std::cout << "Address of ref:     " << &stringREF << std::endl;

	std::cout << "\n";

	std::cout << "string: " << str << std::endl;
	std::cout << "Pointer: " << *stringPTR << std::endl;
	std::cout << "Reference: " << stringREF << std::endl;
	return 0;
}


