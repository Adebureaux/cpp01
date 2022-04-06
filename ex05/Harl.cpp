#include "Harl.hpp"

Harl::Harl()
{
	return;
}

void Harl::complain(std::string level)
{
	const std::string level_ref[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*fptr[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(level_ref[i]))
		{
			(this->*fptr[i])();
			return;
		}
	}
}

Harl::~Harl()
{
	return;
}
