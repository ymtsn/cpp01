#include "Harl.hpp"

Harl::Harl(void)
{
	func[INDEX_DEBUG] = debug;
	func[INDEX_INFO] = info;
	func[INDEX_WARNING] = warning;
	func[INDEX_ERROR] = error;
	StrFuncArray[INDEX_DEBUG] = "DEBUG";
	StrFuncArray[INDEX_INFO] = "INFO";
	StrFuncArray[INDEX_WARNING] = "WARNING";
	StrFuncArray[INDEX_ERROR] = "ERROR";
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt putenough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int i;

	i = 0;
	while (i < FUNCPTR_NUM_MAX)
	{
		if (level == StrFuncArray[i])
		{
			while (i < FUNCPTR_NUM_MAX)
			{
				std::cout << "[ " << StrFuncArray[i] << " ]" << std::endl;
				func[i]();
				i++;
			}
			return ;
		}
		i++;
	}
}
