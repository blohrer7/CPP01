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

// Constructor that creates a Zombie with an initial name.
Zombie::Zombie(std::string name)
{
	this->name = name;
}

// Setter used to change a Zombie's name.
void Zombie::setName(std::string name)
{
	this->name = name;
}

// Default constructor.
Zombie::Zombie(){}

// Destructor.
// when we delete it (heap or horde).
// Used here to show which Zombie is destroyed.
Zombie::~Zombie()
{
	std::cout << this->name <<" is destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

// Creates a horde (array) of N Zombies on the heap.
// Each Zombie is first created using the default constructor,
// then given a unique name using setName.
// The function returns a pointer to the FIRST Zombie in the array.
// Caller must delete the horde using: delete[] horde;
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
