/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:10:52 by blohrer           #+#    #+#             */
/*   Updated: 2025/11/20 15:08:38 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <cctype>

class Weapon{
	private:
		std::string type;

	public:
		Weapon();
		Weapon(const std::string& type);
		
	void setType(const std::string& weaponType);
	std::string getType() const;


};


#endif
