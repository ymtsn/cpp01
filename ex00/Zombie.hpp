/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:58:33 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/10/18 19:37:17 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
public:
	void setName(std::string name);
	void announce(void);
	Zombie(std::string name);
	~Zombie();
private:
	std::string name;
};

Zombie* newZombie(std::string name);

void randomChump(std::string name);

#endif
