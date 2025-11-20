/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:26:21 by blohrer           #+#    #+#             */
/*   Updated: 2025/11/20 15:17:13 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const std::string& type) : type(type) {}

void Weapon::setType(const std::string& weaponType)
{
	type = weaponType;
}

std::string Weapon::getType() const
{
	return type;
}


