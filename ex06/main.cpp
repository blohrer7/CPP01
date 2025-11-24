/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:40:17 by blohrer           #+#    #+#             */
/*   Updated: 2025/11/24 10:44:53 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if(argc != 2)
	{
		std::cout << "./harlfilter argument." <<std::endl;
		return(1);
	}
	harl.complain(argv[1]);
	return(0);
}
