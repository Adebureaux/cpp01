#include "Zombie.hpp"

Zombie::Zombie()
{
	return;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << ": is destroyed" << std::endl;
	return;
}
