/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:40:07 by blohrer           #+#    #+#             */
/*   Updated: 2025/11/24 10:47:27 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}


Harl::~Harl(){}


void Harl::debug(void)
{
	std::cout
			<< "[ DEBUG ] \nI love having extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-specialketchup burger."
			<< "I really do!"
			<< std::endl;
}

void Harl::info(void)
{
	std::cout
			<< "[ INFO ] \nI cannot believe adding extra bacon costs more money. You didn’t put "
			<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			<< std::endl;
}
void Harl::warning(void)
{
	std::cout
			<< "[ WARNING ] \nI think I deserve to have some extra bacon for free. I’ve been coming for "
			<< "years, whereas you started working here just last month."
			<< std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ] \nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;

	std::string complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	while(i < 4)
	{
		if(level == complain[i])
			break;
		i++;
	}

	switch(i)
	{
	case 0:
		(this->*ptr[i++])();
	case 1:
		(this->*ptr[i++])();
	case 2:
		(this->*ptr[i++])();
	case 3:
		(this->*ptr[i++])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
	}
}
