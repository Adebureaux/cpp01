#include "Harl.hpp"

Harl::Harl()
{
	return;
}

void Harl::complain(std::string level)
{
	const std::string level_ref[4] = { "ERROR", "WARNING", "INFO", "DEBUG" };
	void (Harl::*fptr[4])(void) = { &Harl::error, &Harl::warning, &Harl::info, &Harl::debug };
	int lvl = -1;

	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(level_ref[i]))
		{
			lvl = i;
			break;
		}
	}
	if (lvl == -1)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return;
	}
	for (int i = lvl; i > -1; i--)
	{
		(this->*fptr[i])();
		std::cout << std::endl;
	}
}

Harl::~Harl()
{
	return;
}
