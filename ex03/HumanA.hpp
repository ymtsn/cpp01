/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:06:18 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/10/18 23:57:24 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
public:
	HumanA(std::string Name, Weapon& Weapon);
	void attack( void );
private:
	std::string name;
	Weapon*	MyWeapon;
	HumanA( void );
};

#endif
