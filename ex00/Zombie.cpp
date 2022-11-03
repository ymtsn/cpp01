/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:02:07 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/10/18 19:47:32 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name)
{
	this->name = name;
}

Zombie::Zombie( std::string name)
{
	setName(name);
}

Zombie::~Zombie()
{
	std::cout << name << ":Destructed!" << std::endl;
}
