/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:29:43 by blohrer           #+#    #+#             */
/*   Updated: 2025/11/20 08:50:53 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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
