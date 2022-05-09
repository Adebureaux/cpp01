#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl obj;
	const std::string level_ref[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int i;
	std::string level;

	if (ac > 1)
	{
		level = av[1];
		for (i = 0; i < 4; i++)
			if (level_ref[i] == level)
				break ;
		switch (i)
		{
			case 0:
				obj.complain("DEBUG");
			case 1:
				obj.complain("INFO");
			case 2:
				obj.complain("WARNING");
			case 3:
				obj.complain("ERROR");
				break ;
			default:
				std::cout
					<< "[Probably complaining about insignificant problems]"
					<< std::endl;
		}

	}
	return (0);	
}
