#include "Zombie.hpp"

int main(void)
{
	Zombie* dan = Zombie::zombieHorde(10, "Dan");
	for (int i = 0; i < 10; i++)
		dan[i].announce();
	delete [] dan;

	std::cout << std::endl;

	Zombie* rob = Zombie::zombieHorde(10, "Rob");
	rob[0].announce();
	rob[9].announce();
	delete [] rob;

	std::cout << std::endl;

	Zombie* tango = Zombie::zombieHorde(3, "Tango");
	Zombie* delta = Zombie::zombieHorde(3, "Delta");
	Zombie* echo = Zombie::zombieHorde(3, "Echo");
	Zombie* charlie = Zombie::zombieHorde(3, "Charlie");
	echo[0].announce();
	delta[2].announce();
	echo[1].announce();
	tango[1].announce();
	charlie[2].announce();
	delta[0].announce();
	delete [] tango;
	delete [] delta;
	delete [] echo;
	delete [] charlie;

	Zombie* failtest1 = Zombie::zombieHorde(-100, "failed1");
	Zombie* failtest2 = Zombie::zombieHorde(0, "failed2");
	(void)failtest1;
	(void)failtest2;
	return (0);	
}
