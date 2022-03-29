#include "Zombie.hpp"

int main(int ac, char **av)
{
	Zombie::randomChump("random1");
	Zombie* zombie1 = Zombie::newZombie("zombie1");
	std::cout << std::endl;
	Zombie* zombie2 = Zombie::newZombie("zombie2");
	Zombie* zombie3 = Zombie::newZombie("zombie3");
	zombie1->announce();
	zombie1->~Zombie();
	std::cout << std::endl;
	zombie3->announce();
	zombie3->~Zombie();
	std::cout << std::endl;
	zombie2->announce();
	zombie2->~Zombie();
	std::cout << std::endl;
	Zombie* melenchon = Zombie::newZombie("Melenchon");
	Zombie* zemmour = Zombie::newZombie("Zemmour");
	Zombie* macron = Zombie::newZombie("Marcon");
	macron->announce();
	melenchon->announce();
	zemmour->announce();
	melenchon->~Zombie();
	macron->~Zombie();
	zemmour->~Zombie();
	std::cout << std::endl;
	Zombie::randomChump("pierre");
	Zombie::randomChump("paul");
	Zombie::randomChump("jacques");
	return (0);
}
