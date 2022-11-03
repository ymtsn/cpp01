/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsuna <ymatsuna@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:39:12 by ymatsuna          #+#    #+#             */
/*   Updated: 2022/10/18 22:00:27 by ymatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string stringVar;
	std::string *stringPTR;
	stringVar = "HI THIS IS BRAIN";
	stringPTR = &stringVar;
	std::string &stringREF = stringVar;
	
	std::cout << "The addres of string variable :" << &stringVar << std::endl;
	std::cout << "The addres of string pointer :" << stringPTR << std::endl;
	std::cout << "The addres of string reference :" << &stringREF << std::endl;
	std::cout << "The value of string variable :" << stringVar << std::endl;
	std::cout << "The value of string pointer :" << *stringPTR << std::endl;
	std::cout << "The value of string reference :" << stringREF << std::endl;
}
