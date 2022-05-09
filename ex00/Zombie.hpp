#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce(void);
	static void randomChump(std::string name);
	static Zombie* newZombie(std::string name);

	private:
	std::string name;
};

#endif
