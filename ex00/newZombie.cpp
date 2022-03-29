#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *zombie;

	zombie->name = name;
	return (zombie);
}
