/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:11:53 by blohrer           #+#    #+#             */
/*   Updated: 2025/11/19 17:31:37 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();

	randomChump("RandomChump");

	delete heapZombie;

	return 0;
}
