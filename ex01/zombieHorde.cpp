/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:16:14 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/10/18 21:08:20 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	NewZombies;
	int		i;

	i = 0;
	NewZombies = new Zombie [N];
	while (i < N)
	{
		NewZombies[i].setName(name);
		i++;
	}
	return (NewZombies);
}
