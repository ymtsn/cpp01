/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:16:14 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/10/18 19:30:32 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie* NewBornZombie;

	NewBornZombie = newZombie(name);
	NewBornZombie->announce();
	delete NewBornZombie;
}
