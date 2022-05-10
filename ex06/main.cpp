#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << av[0] << " must have one argument witch is 'DEBUG', 'INFO', 'WARNING' or 'ERROR'" << std::endl;
		return (1);
	}

	const std::string	level_ref[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	std::string			level(av[1]);
	Harl	obj;
	int		i;

	for (i = 0; i < 4; i++)
	{
		if (level_ref[i] == level)
			break;
	}
	switch (i)
	{
		case (0):
			obj.complain("DEBUG");
			std::cout << std::endl;
		case (1):
			obj.complain("INFO");
			std::cout << std::endl;
		case (2):
			obj.complain("WARNING");
			std::cout << std::endl;
		case (3):
			obj.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
