/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:03:41 by blohrer           #+#    #+#             */
/*   Updated: 2025/11/20 09:55:55 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie(){}


Zombie::~Zombie()
{
	std::cout << this->name <<" is destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}


Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;

	if(N <= 0)
		return 0;

	Zombie* horde = new Zombie[N];
	while(i < N)
	{
		std::string unique = name + " " + std::to_string(i);
		horde[i].setName(unique);
		horde[i].announce();
		i++;
	}
	return(horde);
}
