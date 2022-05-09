#include "Zombie.hpp"

int main(void)
{
	Zombie* dan = Zombie::zombieHorde(10, "Dan");
	for (int i = 0; i < 10; i++)
		dan[i].announce();

	std::cout << std::endl;

	Zombie* rob = Zombie::zombieHorde(10, "Rob");
	std::cout << "address of rob     : " << rob << std::endl;
	std::cout << "address of &rob[0] : " << &rob[0] << std::endl;
	std::cout << "address of &rob[1] : " << &rob[1] << std::endl; 

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
	delete [] dan;
	delete [] rob;
	delete [] tango;
	delete [] delta;
	delete [] echo;
	delete [] charlie;

	Zombie* failtest1 = Zombie::zombieHorde(-100, "failed1");
	Zombie* failtest2 = Zombie::zombieHorde(0, "failed2");
	std::cout << std::endl << "address of failtest1 : " << failtest1 << std::endl;
	std::cout << "address of failtest2 : " << failtest2 << std::endl;
	return (0);	
}
