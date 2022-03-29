#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstring>

class Zombie
{
	public:
	Zombie();
	~Zombie();
	void announce(void);
	static void randomChump(std::string name);
	static Zombie* newZombie(std::string name);

	private:
	std::string name;
};

#endif
