/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:06:31 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/10/19 00:01:43 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name)
{
	this->name = Name;
}

HumanB::HumanB(std::string Name, Weapon& Weapon)
{
	this->name = Name;
	MyWeapon = &Weapon;
}

void HumanB::setWeapon(Weapon& Weapon)
{
	MyWeapon = &Weapon;
}

void HumanB::attack( void )
{
	std::cout << name <<  " attacks with their " << MyWeapon->getType() << std::endl;
}
