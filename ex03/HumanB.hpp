/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:06:26 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/10/18 23:57:31 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
public:
	HumanB(std::string Name);
	HumanB(std::string Name, Weapon& Weapon);
	void attack( void );
	void setWeapon(Weapon& Weapon);
private:
	std::string name;
	Weapon*	MyWeapon;
};

#endif
