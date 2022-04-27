#include "Harl.hpp"

int main(void)
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
