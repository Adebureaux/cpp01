#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

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

void Harl::debug(void)
{
	std::cout << "[ DEBUG ] > " << "Debug messages contain contextual information. They are mostly used for problem diagnosis." << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ] > " << "These messages contain extensive information. They are helpful for tracing program execution in a production environment." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ] > "  << "Warning messages indicate a potential issue in the system. However, it can be handled or ignored." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ] > " << "These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention." << std::endl;
}
