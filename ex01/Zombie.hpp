#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstring>

class Zombie
{
	public:
	Zombie();
	void announce(void);
	static Zombie* zombieHorde(int N, std::string name);
	~Zombie();

	private:
	std::string name;
};

#endif
