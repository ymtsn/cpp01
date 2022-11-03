/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:58:33 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/10/18 21:06:10 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <list>

class Zombie{
public:
	void setName(std::string name);
	void announce(void);
	Zombie();
	~Zombie();
private:
	std::string name;
};

Zombie* newZombie(std::string name);

Zombie* zombieHorde(int N, std::string name);

#endif
