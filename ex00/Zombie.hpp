/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:29:43 by blohrer           #+#    #+#             */
/*   Updated: 2025/11/19 17:09:42 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <cctype>
#include <string>

class Zombie{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		~Zombie();
		
		void announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
