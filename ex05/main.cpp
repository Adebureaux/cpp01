#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl obj;

	obj.complain("DEBUG");
	std::cout << std::endl;
	obj.complain("INFO");
	std::cout << std::endl;
	obj.complain("WARNING");
	std::cout << std::endl;
	obj.complain("ERROR");
	return (0);
}
