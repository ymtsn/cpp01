/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:31:01 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/10/18 21:17:10 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string	ZombieName;
	Zombie*		NewZombies;
	int			zombieNum;
	int			i;

	
	ZombieName = "Bunjiro";
	zombieNum = 3;
	i = 0;
	NewZombies = zombieHorde(zombieNum, ZombieName);
	while (i < zombieNum)
	{
		NewZombies[i].announce();
		i++;
	}
	delete [] NewZombies;
}
