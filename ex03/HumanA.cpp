/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:06:06 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/10/19 00:01:35 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon& Weapon)
{
	this->name = Name;
	MyWeapon = &Weapon;
}

void HumanA::attack( void )
{
	std::cout << name <<  " attacks with their " << MyWeapon->getType() << std::endl;
}
